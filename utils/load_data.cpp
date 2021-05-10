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
    auto endIterate = raw_companies.end();
    for (auto iterator = raw_companies.begin(); iterator != endIterate; iterator++) {
        companies.insert(
                {iterator->first, Company(iterator->second.id, iterator->second.name, iterator->second.namad)}
        );
    }
    auto endIterate1 = raw_prices.end();
    for (auto iterator = raw_prices.begin(); iterator != endIterate1; iterator++) {
        companies.find(iterator->second.company_id)->second.days.emplace_back(Day(
                raw_dates.find(
                        to_string(iterator->second.company_id) + dash +
                        to_string(iterator->second.dateRow))->second.date,
                iterator->second.high,
                iterator->second.low,
                iterator->second.open,
                iterator->second.close,
                iterator->second.first,
                iterator->second.grad,
                iterator->second.valTrades,
                iterator->second.numTrades,
                iterator->second.numShares,
                iterator->second.closeAdj
        ));
    }
}
