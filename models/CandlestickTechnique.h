//
// Created by afshari9978 on 5/3/21.
//

#ifndef MULTICOREPROJECT_CANDLESTICKTECHNIQUE_H
#define MULTICOREPROJECT_CANDLESTICKTECHNIQUE_H

#include "string"
#include "vector"
#include "Candle.h"

using namespace std;

class CandlestickTechnique {
public:
    string name;
    bool isAscending;
    vector<Candle> candles;

    CandlestickTechnique(const string &name, bool isAscending, const vector<Candle> &candles);

    CandlestickTechnique(const string &name, bool isAscending);

};


#endif //MULTICOREPROJECT_CANDLESTICKTECHNIQUE_H
