//
// Created by afshari9978 on 4/25/21.
//
#include "utils.h"
#include "load_sqlite/load_sqlite.h"
#include "models/raw_models/RawDate.h"
#include "models/raw_models/RawPrice.h"

extern vector<RawCompany> raw_companies;
extern vector<RawDate> raw_dates;
extern vector<RawPrice> raw_prices;

static int db_company_read_callback(void *data, int argc, char **argv, char **azColName) {
    if (argc == 3) {
        raw_companies.emplace_back(stoi(argv[0]), argv[1], argv[2]);
    }

    return 0;
}

static int db_date_read_callback(void *data, int argc, char **argv, char **azColName) {
    if (argc == 3) {
        raw_dates.emplace_back(stoi(argv[0]), argv[1], stoi(argv[2]));
    }

    return 0;
}

static int db_price_read_callback(void *data, int argc, char **argv, char **azColName) {
    if (argc == 12) {
        raw_prices.emplace_back(stoi(argv[0]), stoi(argv[1]), argv[2], argv[3], argv[4], argv[5], argv[6], argv[7],
                                argv[8], argv[9], argv[10], argv[11]);
    }

    return 0;
}

void load_raw_data() {

    db_select("SELECT * FROM company;", db_company_read_callback);
    db_select("SELECT * FROM date;", db_date_read_callback);
    db_select("SELECT * FROM price;", db_price_read_callback);
}

