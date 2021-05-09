//
// Created by afshari9978 on 5/3/21.
//

#include "CandlestickTechnique.h"

CandlestickTechnique::CandlestickTechnique(
        const string &name,
        bool isAscending
) :
        name(name),
        isAscending(isAscending) {}

CandlestickTechnique::CandlestickTechnique(const string &name, bool isAscending, const vector<Candle> &candles) : name(
        name), isAscending(isAscending), candles(candles) {}
