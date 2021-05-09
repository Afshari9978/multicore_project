//
// Created by afshari9978 on 5/3/21.
//

#include "find_technique.h"
#include <iostream>
#include "map"
#include "candles_store.h"

extern map<int, Company> companies;
using namespace std;

bool findTechnique(vector<int> &days, const CandlestickTechnique &technique, const Company &company) {
    for (int dayCounter = 0; dayCounter < company.days.size() - technique.candles.size(); dayCounter++) {
        Day day = company.days[dayCounter];
        bool applied = true;
        bool isFirstDay = true;
        int openPrice, closePrice;
        int innerDayIndex = 0;
        Day innerDay;
        for (Candle candle : technique.candles) {
            innerDay = company.days[dayCounter + innerDayIndex];
            if (isFirstDay) {
                openPrice = innerDay.openPrice;
                closePrice = innerDay.closePrice;
                isFirstDay = false;
            }

            if (innerDay.isAscending() != candle.isAscending) {
                applied = false;
            }

            if (candle.openMatchPreviousOpenAvailable()) {
                int low = openPrice + candle.openMatchPreviousOpenFrom * innerDay.length() / 100;
                int high = openPrice + candle.openMatchPreviousOpenTo * innerDay.length() / 100;
                if (innerDay.openPrice < low || innerDay.openPrice > high) {
                    applied = false;
                }
            }
            if (candle.closeMatchPreviousOpenAvailable()) {
                int low = openPrice + candle.closeMatchPreviousOpenFrom * innerDay.length() / 100;
                int high = openPrice + candle.closeMatchPreviousOpenTo * innerDay.length() / 100;
                if (innerDay.closePrice < low || innerDay.closePrice > high) {
                    applied = false;
                }
            }
            if (candle.openMatchPreviousCloseAvailable()) {
                int low = closePrice + candle.openMatchPreviousCloseFrom * innerDay.length() / 100;
                int high = closePrice + candle.openMatchPreviousCloseTo * innerDay.length() / 100;
                if (innerDay.openPrice < low || innerDay.openPrice > high) {
                    applied = false;
                }
            }
            if (candle.closeMatchPreviousCloseAvailable()) {
                int low = closePrice + candle.closeMatchPreviousCloseFrom * innerDay.length() / 100;
                int high = closePrice + candle.closeMatchPreviousCloseTo * innerDay.length() / 100;
                if (innerDay.closePrice < low || innerDay.closePrice > high) {
                    applied = false;
                }
            }

            openPrice = innerDay.openPrice;
            closePrice = innerDay.closePrice;
            innerDayIndex += 1;
        }
        if (applied) {
            days.push_back(dayCounter);
        }
    }
    return true;
}


void findTechniques() {
    cout << "findTechniques" << endl;
    CandlestickTechnique techniques[] = {
            TECHNIQUE_DARK_CLOUD_COVER,
            TECHNIQUE_PIERCING,
            TECHNIQUE_THREE_WHITE_SOLDIERS,
            TECHNIQUE_THREE_BLACK_CROWS,
    };
    for (auto const&[key, val] : companies) {
//        cout << val.namad << endl;
        for (auto const &technique: techniques) {
            vector<int> days;
            findTechnique(days, technique, val);
//            cout << "    " << technique.name << " = " << days.size() << endl;
            days.clear();
        }
    }
}