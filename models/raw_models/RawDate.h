//
// Created by afshari9978 on 5/1/21.
//
#include "iostream"

using namespace std;

#ifndef MULTICOREPROJECT_RAWDATE_H
#define MULTICOREPROJECT_RAWDATE_H


class RawDate {
public:
    int company_id;
    string date;
    int date_row;

    RawDate(int company_id, const string &date, int date_row);
};


#endif //MULTICOREPROJECT_RAWDATE_H
