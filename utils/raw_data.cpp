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

extern map<int, RawCompany> raw_companies;
extern map<string, RawDate> raw_dates;
extern map<string, RawPrice> raw_prices;

static int dbCompanyReadCallback(void *data, int argc, char **argv, char **azColName) {
    if (argc == 3) {
        raw_companies.insert({stoi(argv[0]), RawCompany(stoi(argv[0]), argv[1], argv[2])});
    }

    return 0;
}

static int dbDateReadCallback(void *data, int argc, char **argv, char **azColName) {
    string dash = "-";
    if (argc == 3) {
        raw_dates.insert({argv[0] + dash + argv[2], RawDate(stoi(argv[0]), argv[1], stoi(argv[2]))});
    }

    return 0;
}

static int dbPriceReadCallback(void *data, int argc, char **argv, char **azColName) {
    string dash = "-";
    if (argc == 12) {
        raw_prices.insert({argv[0] + dash + argv[1],
                           RawPrice(stoi(argv[0]), stoi(argv[1]), argv[2], argv[3], argv[4], argv[5], argv[6], argv[7],
                                    argv[8], argv[9], argv[10], argv[11])});
    }

    return 0;
}

void loadRawData() {
    cout << "loadRawData" << endl;
    db_select("SELECT * FROM company;", dbCompanyReadCallback);
    // todo order date_row
    db_select("SELECT * FROM date;", dbDateReadCallback);
    db_select("SELECT * FROM price;", dbPriceReadCallback);
}

