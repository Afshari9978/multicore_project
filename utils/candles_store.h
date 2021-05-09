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
CandlestickTechnique TECHNIQUE_SPINNING_TOPS = CandlestickTechnique(
        "Spinning Tops",
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
                        (int[2]) {-25, 10},
                        (int[2]) {-10, 25},
                        NOT_MENTIONED
                )
        }
);
CandlestickTechnique TECHNIQUE_HAMMER = CandlestickTechnique(
        "Hammer",
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
                        true,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-10, 10},
                        (int[2]) {-20, 20}
                ),
                Candle(
                        true,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-10, 20},
                        NOT_MENTIONED
                ),
                Candle(
                        true,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-10, 20},
                        NOT_MENTIONED
                )
        }
);
CandlestickTechnique TECHNIQUE_HANGING_MAN = CandlestickTechnique(
        "Hanging Man",
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
                        true,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-10, 20},
                        NOT_MENTIONED
                ),
                Candle(
                        false,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-10, 10},
                        (int[2]) {-20, 20}
                ),
                Candle(
                        false,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-20, 10},
                        NOT_MENTIONED
                ),
                Candle(
                        false,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-20, 10},
                        NOT_MENTIONED
                )

        }
);

CandlestickTechnique TECHNIQUE_ENGULFING_UP = CandlestickTechnique(
        "Engulfing Up",
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
                        (int[2]) {-15, 10},
                        NOT_MENTIONED
                ),
                Candle(
                        true,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-10, 20},
                        NOT_MENTIONED
                ),
                Candle(
                        true,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-10, 20},
                        NOT_MENTIONED
                )
        }
);
CandlestickTechnique TECHNIQUE_ENGULFING_DOWN = CandlestickTechnique(
        "Engulfing Down",
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
                        false,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-15, 10},
                        NOT_MENTIONED
                ),
                Candle(
                        false,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-10, 20},
                        NOT_MENTIONED
                ),
                Candle(
                        false,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-10, 20},
                        NOT_MENTIONED
                )
        }
);
CandlestickTechnique TECHNIQUE_TWEEZERS_UP = CandlestickTechnique(
        "Tweezers Up",
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
                Candle(
                        false,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-5, 5},
                        NOT_MENTIONED
                ),
                Candle(
                        true,
                        NOT_MENTIONED,
                        (int[2]) {-5, 5},
                        (int[2]) {-5, 5},
                        NOT_MENTIONED
                ),
                Candle(
                        true,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-10, 10},
                        NOT_MENTIONED
                )
        }
);
CandlestickTechnique TECHNIQUE_TWEEZERS_DOWN = CandlestickTechnique(
        "Tweezers Down",
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
                        false,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-10, 10},
                        NOT_MENTIONED
                ),
                Candle(
                        true,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-5, 5},
                        NOT_MENTIONED
                ),
                Candle(
                        false,
                        NOT_MENTIONED,
                        (int[2]) {-5, 5},
                        (int[2]) {-5, 5},
                        NOT_MENTIONED
                ),
                Candle(
                        false,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-10, 10},
                        NOT_MENTIONED
                )
        }
);
CandlestickTechnique TECHNIQUE_MORNING_STAR = CandlestickTechnique(
        "Morning Star",
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
                        (int[2]) {-5, 5},
                        (int[2]) {-5, 5}
                ),
                Candle(
                        true,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-5, 5},
                        NOT_MENTIONED
                ),

        }
);
CandlestickTechnique TECHNIQUE_EVENING_STAR = CandlestickTechnique(
        "Evening Star",
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
                        true,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-5, 5},
                        (int[2]) {-5, 5}
                ),
                Candle(
                        false,
                        NOT_MENTIONED,
                        NOT_MENTIONED,
                        (int[2]) {-5, 5},
                        NOT_MENTIONED
                ),

        }
);


#endif //MULTICOREPROJECT_CANDLES_STORE_H
