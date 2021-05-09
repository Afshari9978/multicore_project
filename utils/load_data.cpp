//
// Created by afshari9978 on 5/2/21.
//

#include "load_data.h"
#include "../models/raw_models/RawCompany.h"
#include "../models/raw_models/RawDate.h"
#include "../models/raw_models/RawPrice.h"
#include "../models/Company.h"
#include "map"

extern map<int, RawCompany> raw_companies;
extern map<string, RawDate> raw_dates;
extern map<string, RawPrice> raw_prices;
extern map<int, Company> companies;

void loadDays() {
    cout << "loadDays" << endl;
    string dash = "-";
    for (auto const&[key, rawCompany] : raw_companies) {
        companies.insert({key, Company(rawCompany.id, rawCompany.name, rawCompany.namad)});
    }
    for (auto const&[key, rawPrice] : raw_prices) {
        companies.find(rawPrice.company_id)->second.days.emplace_back(Day(
                raw_dates.find(to_string(rawPrice.company_id) + dash + to_string(rawPrice.dateRow))->second.date,
                rawPrice.high,
                rawPrice.low,
                rawPrice.open,
                rawPrice.close,
                rawPrice.first,
                rawPrice.grad,
                rawPrice.valTrades,
                rawPrice.numTrades,
                rawPrice.numShares,
                rawPrice.closeAdj
        ));
    }
}
