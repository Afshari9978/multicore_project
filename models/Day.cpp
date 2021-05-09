//
// Created by afshari9978 on 5/1/21.
//

#include "Day.h"

Day::Day(
        const string &date,
        int highPrice,
        int lowPrice,
        int openPrice,
        int closePrice,
        int firstPrice,
        int gradient,
        long long int tradesValue,
        long long int tradesNumber,
        long long int sharesNumber,
        long long int closeAdj
) :
        date(date),
        highPrice(highPrice),
        lowPrice(lowPrice), openPrice(openPrice),
        closePrice(closePrice),
        firstPrice(firstPrice),
        gradient(gradient),
        tradesValue(tradesValue),
        tradesNumber(tradesNumber),
        sharesNumber(sharesNumber),
        closeAdj(closeAdj) {}

Day::Day(
        const string &date,
        const string &highPrice,
        const string &lowPrice,
        const string &openPrice,
        const string &closePrice,
        const string &firstPrice,
        const string &gradient,
        const string &tradesValue,
        const string &tradesNumber,
        const string &sharesNumber,
        const string &closeAdj
) {
    this->date = date;
    this->highPrice = stoi(highPrice);
    this->lowPrice = stoi(lowPrice);
    this->openPrice = stoi(openPrice);
    this->closePrice = stoi(closePrice);
    this->firstPrice = stoi(firstPrice);
    this->gradient = stoi(gradient);
    this->tradesValue = stol(tradesValue);
    this->tradesNumber = stol(tradesNumber);
    this->sharesNumber = stol(sharesNumber);
    this->closeAdj = stol(closeAdj);
}

bool Day::isAscending() {
    return this->closePrice >= this->openPrice;
}


int Day::length() {
    return abs(this->closePrice - this->openPrice);
}

Day::Day() {

}
