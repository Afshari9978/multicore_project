//
// Created by afshari9978 on 5/3/21.
//

#include "find_technique.h"
#include <iostream>
#include "map"

extern Company companies[];
using namespace std;

int NOT_MENTIONED[2] = {-1, -1};

bool findTechnique(int &days, const CandlestickTechnique &technique, const Company &company) {
    unsigned long daysCount = company.daysLength;
    unsigned long candlesCount = technique.candlesCount;
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
//            days[0] = dayCounter;
        }
    }
    return true;
}


#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-loop-convert"

void findTechniques() {
    cout << "findTechniques" << endl;

    int range_5_5[] = {-5, 5};
    int range_10_10[] = {-10, 10};
    int range_10_20[] = {-10, 20};
    int range_10_25[] = {-10, 25};
    int range_15_10[] = {-15, 10};
    int range_20_10[] = {-20, 10};
    int range_20_20[] = {-20, 20};
    int range_20_40[] = {-20, 40};
    int range_25_50[] = {-25, 50};
    int range_25_10[] = {-25, 10};

    CandlestickTechnique TECHNIQUE_DARK_CLOUD_COVER = CandlestickTechnique(
            "Dark Cloud Cover",
            false,
            2
    );
    TECHNIQUE_DARK_CLOUD_COVER.candles[0] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED
    );
    TECHNIQUE_DARK_CLOUD_COVER.candles[1] = Candle(
            false,
            NOT_MENTIONED,
            range_20_40,
            range_10_10,
            NOT_MENTIONED
    );

    CandlestickTechnique TECHNIQUE_PIERCING = CandlestickTechnique(
            "Piercing",
            true,
            2
    );
    TECHNIQUE_PIERCING.candles[0] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED
    );
    TECHNIQUE_PIERCING.candles[1] = Candle(
            true,
            NOT_MENTIONED,
            range_25_50,
            range_10_10,
            NOT_MENTIONED
    );

    CandlestickTechnique TECHNIQUE_THREE_WHITE_SOLDIERS = CandlestickTechnique(
            "Three White Soldiers",
            true,
            3
    );
    TECHNIQUE_THREE_WHITE_SOLDIERS.candles[0] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED
    );
    TECHNIQUE_THREE_WHITE_SOLDIERS.candles[1] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_10,
            NOT_MENTIONED
    );
    TECHNIQUE_THREE_WHITE_SOLDIERS.candles[2] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_10,
            NOT_MENTIONED
    );

    CandlestickTechnique TECHNIQUE_THREE_BLACK_CROWS = CandlestickTechnique(
            "Three Black Crows",
            true,
            3
    );
    TECHNIQUE_THREE_BLACK_CROWS.candles[0] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED
    );
    TECHNIQUE_THREE_BLACK_CROWS.candles[1] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_10,
            NOT_MENTIONED
    );
    TECHNIQUE_THREE_BLACK_CROWS.candles[2] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_10,
            NOT_MENTIONED
    );

    CandlestickTechnique TECHNIQUE_SPINNING_TOPS = CandlestickTechnique(
            "Spinning Tops",
            false,
            2
    );
    TECHNIQUE_SPINNING_TOPS.candles[0] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED
    );
    TECHNIQUE_SPINNING_TOPS.candles[1] = Candle(
            false,
            NOT_MENTIONED,
            range_25_10,
            range_10_25,
            NOT_MENTIONED
    );

    CandlestickTechnique TECHNIQUE_HAMMER = CandlestickTechnique(
            "Hammer",
            true,
            5
    );
    TECHNIQUE_HAMMER.candles[0] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED
    );
    TECHNIQUE_HAMMER.candles[1] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_10,
            NOT_MENTIONED
    );
    TECHNIQUE_HAMMER.candles[2] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_10,
            range_20_20
    );
    TECHNIQUE_HAMMER.candles[3] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_20,
            NOT_MENTIONED
    );
    TECHNIQUE_HAMMER.candles[4] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_20,
            NOT_MENTIONED
    );

    CandlestickTechnique TECHNIQUE_HANGING_MAN = CandlestickTechnique(
            "Hanging Man",
            false,
            5
    );
    TECHNIQUE_HANGING_MAN.candles[0] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED
    );
    TECHNIQUE_HANGING_MAN.candles[1] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_20,
            NOT_MENTIONED
    );
    TECHNIQUE_HANGING_MAN.candles[2] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_10,
            range_20_20
    );
    TECHNIQUE_HANGING_MAN.candles[3] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_20_10,
            NOT_MENTIONED
    );
    TECHNIQUE_HANGING_MAN.candles[4] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_20_10,
            NOT_MENTIONED
    );

    CandlestickTechnique TECHNIQUE_ENGULFING_UP = CandlestickTechnique(
            "Engulfing Up",
            true,
            4
    );
    TECHNIQUE_ENGULFING_UP.candles[0] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED
    );
    TECHNIQUE_ENGULFING_UP.candles[1] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_15_10,
            NOT_MENTIONED
    );
    TECHNIQUE_ENGULFING_UP.candles[2] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_20,
            NOT_MENTIONED
    );
    TECHNIQUE_ENGULFING_UP.candles[3] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_20,
            NOT_MENTIONED
    );

    CandlestickTechnique TECHNIQUE_ENGULFING_DOWN = CandlestickTechnique(
            "Engulfing Down",
            true,
            4
    );
    TECHNIQUE_ENGULFING_DOWN.candles[0] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED
    );
    TECHNIQUE_ENGULFING_DOWN.candles[1] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_15_10,
            NOT_MENTIONED
    );
    TECHNIQUE_ENGULFING_DOWN.candles[2] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_20,
            NOT_MENTIONED
    );
    TECHNIQUE_ENGULFING_DOWN.candles[3] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_20,
            NOT_MENTIONED
    );

    CandlestickTechnique TECHNIQUE_TWEEZERS_UP = CandlestickTechnique(
            "Tweezers Up",
            true,
            6
    );
    TECHNIQUE_TWEEZERS_UP.candles[0] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED
    );
    TECHNIQUE_TWEEZERS_UP.candles[1] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_10,
            NOT_MENTIONED
    );
    TECHNIQUE_TWEEZERS_UP.candles[2] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_10,
            NOT_MENTIONED
    );
    TECHNIQUE_TWEEZERS_UP.candles[3] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_5_5,
            NOT_MENTIONED
    );
    TECHNIQUE_TWEEZERS_UP.candles[4] = Candle(
            true,
            NOT_MENTIONED,
            range_5_5,
            range_5_5,
            NOT_MENTIONED
    );
    TECHNIQUE_TWEEZERS_UP.candles[5] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_10,
            NOT_MENTIONED
    );

    CandlestickTechnique TECHNIQUE_TWEEZERS_DOWN = CandlestickTechnique(
            "Tweezers Down",
            true,
            6
    );
    TECHNIQUE_TWEEZERS_DOWN.candles[0] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED
    );
    TECHNIQUE_TWEEZERS_DOWN.candles[1] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_10,
            NOT_MENTIONED
    );
    TECHNIQUE_TWEEZERS_DOWN.candles[2] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_10,
            NOT_MENTIONED
    );
    TECHNIQUE_TWEEZERS_DOWN.candles[3] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_5_5,
            NOT_MENTIONED
    );
    TECHNIQUE_TWEEZERS_DOWN.candles[4] = Candle(
            false,
            NOT_MENTIONED,
            range_5_5,
            range_5_5,
            NOT_MENTIONED
    );
    TECHNIQUE_TWEEZERS_DOWN.candles[5] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_10_10,
            NOT_MENTIONED
    );

    CandlestickTechnique TECHNIQUE_MORNING_STAR = CandlestickTechnique(
            "Morning Star",
            true,
            3
    );
    TECHNIQUE_MORNING_STAR.candles[0] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED
    );
    TECHNIQUE_MORNING_STAR.candles[1] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_5_5,
            range_5_5
    );
    TECHNIQUE_MORNING_STAR.candles[2] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_5_5,
            NOT_MENTIONED
    );

    CandlestickTechnique TECHNIQUE_EVENING_STAR = CandlestickTechnique(
            "Evening Star",
            false,
            3
    );
    TECHNIQUE_EVENING_STAR.candles[0] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED,
            NOT_MENTIONED
    );
    TECHNIQUE_EVENING_STAR.candles[1] = Candle(
            true,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_5_5,
            range_5_5
    );
    TECHNIQUE_EVENING_STAR.candles[2] = Candle(
            false,
            NOT_MENTIONED,
            NOT_MENTIONED,
            range_5_5,
            NOT_MENTIONED
    );

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
            TECHNIQUE_EVENING_STAR,
    };

    for (int i = 0; i < 736; i++) {
        for (int j = 0; j < 13; j++) {
            Day days[10000];
            findTechnique(reinterpret_cast<int &>(days), techniques[j], companies[i]);
        }
    }
}

#pragma clang diagnostic pop