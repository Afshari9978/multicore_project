//
// Created by afshari9978 on 4/25/21.
//
#include <cstring>
#include "raw_data.h"
#include "../load_sqlite/load_sqlite.h"
#include "../models/raw_models/RawDate.h"
#include "../models/raw_models/RawPrice.h"
#include "map"

using namespace std;

extern RawCompany raw_companies[];
extern RawDate raw_dates[];
extern RawPrice raw_prices[];
int rawDateIndex = 0;
int rawPriceIndex = 0;

static int dbCompanyReadCallback(void *data, int argc, char **argv, char **azColName) {
    if (argc == 3) {
        raw_companies[stoi(argv[0]) - 1] = RawCompany(stoi(argv[0]), argv[1], argv[2]);
    }

    return 0;
}

static int dbDateReadCallback(void *data, int argc, char **argv, char **azColName) {
    string dash = "-";
    raw_dates[rawDateIndex] = RawDate(stoi(argv[0]), argv[1], stoi(argv[2]));
    rawDateIndex++;

    return 0;
}

static int dbPriceReadCallback(void *data, int argc, char **argv, char **azColName) {
    string dash = "-";
    raw_prices[rawPriceIndex] = RawPrice(stoi(argv[0]), stoi(argv[1]), argv[2], argv[3], argv[4], argv[5], argv[6],
                                         argv[7], argv[8], argv[9], argv[10], argv[11]);
    rawPriceIndex++;

    return 0;
}

void loadRawData() {
    cout << "loadRawData" << endl;
    db_select("SELECT * FROM company;", dbCompanyReadCallback);
    // todo order date_row
    db_select("SELECT * FROM date;", dbDateReadCallback);
    db_select("SELECT * FROM price;", dbPriceReadCallback);
}

