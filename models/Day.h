//
// Created by afshari9978 on 5/1/21.
//

#ifndef MULTICOREPROJECT_DAY_H
#define MULTICOREPROJECT_DAY_H

#include "string"

using namespace std;

class Day {
public:
    Day();

    string date;
    int highPrice;
    int lowPrice;
    int openPrice;
    int closePrice;
    int firstPrice;
    int gradient;
    long long int tradesValue;
    long long int tradesNumber;
    long long int sharesNumber;
    long long int closeAdj;

    Day(const string &date, int highPrice, int lowPrice, int openPrice, int closePrice, int firstPrice, int gradient,
        long long int tradesValue, long long int tradesNumber, long long int sharesNumber, long long int closeAdj);

    Day(const string &date, const string &highPrice, const string &lowPrice, const string &openPrice,
        const string &closePrice, const string &firstPrice, const string &gradient,
        const string &tradesValue, const string &tradesNumber, const string &sharesNumber, const string &closeAdj);

    bool operator< (const Day &other) const {
        return date < other.date;
    }

    bool isAscending();

    int length();

};


#endif //MULTICOREPROJECT_DAY_H
