//
// Created by afshari9978 on 5/3/21.
//

#ifndef MULTICOREPROJECT_CANDLES_STORE_H
#define MULTICOREPROJECT_CANDLES_STORE_H

#include "../models/CandlestickTechnique.h"
#include "../models/Candle.h"

int NOT_MENTIONED[2] = {-1, -1};
CandlestickTechnique TECHNIQUE_DARK_CLOUD_COVER = CandlestickTechnique(
        "Dark Cloud Cover",
        false,
        vector<Candle>{
                Candle(
                        true,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        NOT_MENTIONED
                ),
                Candle(
                        false,
                        NOT_MENTIONED,
                        (int[2]) {-20, 40},
                        (int[2]) {-10, 10},
                        NOT_MENTIONED
                ),

        }
);


CandlestickTechnique TECHNIQUE_PIERCING = CandlestickTechnique(
        "Piercing",
        true,
        vector<Candle>{
                Candle(
                        true,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        NOT_MENTIONED
                ),
                Candle(
                        true,
                        NOT_MENTIONED,
                        (int[2]) {-25, 50},
                        (int[2]) {-10, 10},
                        NOT_MENTIONED
                )
        }
);
CandlestickTechnique TECHNIQUE_THREE_WHITE_SOLDIERS = CandlestickTechnique(
        "Three White Soldiers",
        true,
        vector<Candle>{
                Candle(
                        true,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        NOT_MENTIONED
                ),
                Candle(
                        true,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-10, 10},
                        NOT_MENTIONED
                ),
                Candle(
                        true,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-10, 10},
                        NOT_MENTIONED
                ),

        }
);
CandlestickTechnique TECHNIQUE_THREE_BLACK_CROWS = CandlestickTechnique(
        "Three Black Crows",
        true,
        vector<Candle>{
                Candle(
                        false,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        NOT_MENTIONED
                ),
                Candle(
                        false,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-10, 10},
                        NOT_MENTIONED
                ),
                Candle(
                        false,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-10, 10},
                        NOT_MENTIONED
                ),

        }
);

#endif //MULTICOREPROJECT_CANDLES_STORE_H
