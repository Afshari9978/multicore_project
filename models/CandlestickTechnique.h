//
// Created by afshari9978 on 5/3/21.
//

#ifndef MULTICOREPROJECT_CANDLESTICKTECHNIQUE_H
#define MULTICOREPROJECT_CANDLESTICKTECHNIQUE_H

#include "string"
#include "Candle.h"

using namespace std;

class CandlestickTechnique {
public:
    CandlestickTechnique();

    string name;
    bool isAscending;
    Candle candles[8];
    int candlesCount;

    CandlestickTechnique(const string &name, bool isAscending, int candlesCount);
};


#endif //MULTICOREPROJECT_CANDLESTICKTECHNIQUE_H
