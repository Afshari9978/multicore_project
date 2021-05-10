//
// Created by afshari9978 on 5/2/21.
//

#include "load_data.h"
#include "../models/raw_models/RawCompany.h"
#include "../models/raw_models/RawDate.h"
#include "../models/raw_models/RawPrice.h"
#include "../models/Company.h"

#define COMPANIES_COUNT 736
#define DATES_COUNT 1561205
#define PRICES_COUNT 1561205

#define THREADS_COUNT 12

extern RawCompany raw_companies[];
extern RawDate raw_dates[];
extern RawPrice raw_prices[];
extern Company companies[];

void loadDays() {
    cout << "loadDays" << endl;
    string dash = "-";
    for (int iterator = 0; iterator < COMPANIES_COUNT; iterator++) {
        companies[iterator] = Company(raw_companies[iterator].id, raw_companies[iterator].name,
                                      raw_companies[iterator].namad);
    }
    for (int i = 0; i < PRICES_COUNT; i++) {
        companies[raw_prices[i].company_id - 1].days[raw_prices[i].dateRow - 1] = Day(
                "",
                raw_prices[i].high,
                raw_prices[i].low,
                raw_prices[i].open,
                raw_prices[i].close,
                raw_prices[i].first,
                raw_prices[i].grad,
                raw_prices[i].valTrades,
                raw_prices[i].numTrades,
                raw_prices[i].numShares,
                raw_prices[i].closeAdj
        );
    }
    for (int i = 0; i < DATES_COUNT; i++) {
        companies[raw_dates[i].company_id - 1].days[raw_dates[i].date_row - 1].date = raw_dates[i].date;
    }
}
