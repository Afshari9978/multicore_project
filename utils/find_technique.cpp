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
    unsigned long daysCount = company.days.size();
    unsigned long candlesCount = technique.candles.size();
    for (int dayCounter = 0; dayCounter < daysCount - candlesCount; dayCounter++) {
        Day day = company.days[dayCounter];
        bool applied = true;
        bool isFirstDay = true;
        int openPrice, closePrice;
        int innerDayIndex = 0;
        Day innerDay;
        for (int candleIndex = 0; candleIndex < candlesCount; candleIndex++) {
            Candle candle = technique.candles[candleIndex];
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


#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-loop-convert"

void findTechniques() {
    cout << "findTechniques" << endl;
    CandlestickTechnique techniques[] = {
            TECHNIQUE_DARK_CLOUD_COVER,
            TECHNIQUE_PIERCING,
            TECHNIQUE_THREE_WHITE_SOLDIERS,
            TECHNIQUE_THREE_BLACK_CROWS,
            TECHNIQUE_SPINNING_TOPS,
            TECHNIQUE_HAMMER,
            TECHNIQUE_HANGING_MAN,
            TECHNIQUE_ENGULFING_UP,
            TECHNIQUE_ENGULFING_DOWN,
            TECHNIQUE_TWEEZERS_UP,
            TECHNIQUE_TWEEZERS_DOWN,
            TECHNIQUE_MORNING_STAR,
            TECHNIQUE_EVENING_STAR
    };

    auto endIterate = companies.end();
    for (auto iterator = companies.begin(); iterator != endIterate; iterator++) {
        for (int i = 0; i < 13; i++) {
            vector<int> days;
            findTechnique(days, techniques[i], iterator->second);
            days.clear();
        }
    }
}

#pragma clang diagnostic pop