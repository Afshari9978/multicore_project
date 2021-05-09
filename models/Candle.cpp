//
// Created by afshari9978 on 5/3/21.
//

#include "Candle.h"

Candle::Candle(
        bool isAscending,
        int openMatchPreviousOpen[2],
        int closeMatchPreviousOpen[2],
        int openMatchPreviousClose[2],
        int closeMatchPreviousClose[2]
) :
        isAscending(isAscending) {
    this->openMatchPreviousOpenFrom = openMatchPreviousOpen[0];
    this->openMatchPreviousOpenTo = openMatchPreviousOpen[1];
    this->closeMatchPreviousOpenFrom = closeMatchPreviousOpen[0];
    this->closeMatchPreviousOpenTo = closeMatchPreviousOpen[1];
    this->openMatchPreviousCloseFrom = openMatchPreviousClose[0];
    this->openMatchPreviousCloseTo = openMatchPreviousClose[1];
    this->closeMatchPreviousCloseFrom = closeMatchPreviousClose[0];
    this->closeMatchPreviousCloseTo = closeMatchPreviousClose[1];

}

bool Candle::openMatchPreviousOpenAvailable() {
    if (this->openMatchPreviousOpenFrom == -1 && this->openMatchPreviousOpenTo == -1) return false;
    return true;
}

bool Candle::closeMatchPreviousOpenAvailable() {
    if (this->closeMatchPreviousOpenFrom == -1 && this->closeMatchPreviousOpenTo == -1) return false;
    return true;
}

bool Candle::openMatchPreviousCloseAvailable() {
    if (this->openMatchPreviousCloseFrom == -1 && this->openMatchPreviousCloseTo == -1) return false;
    return true;
}

bool Candle::closeMatchPreviousCloseAvailable() {
    if (this->closeMatchPreviousCloseFrom == -1 && this->closeMatchPreviousCloseTo == -1) return false;
    return true;
}
