//
// Created by afshari9978 on 5/1/21.
//

#ifndef MULTICOREPROJECT_COMPANY_H
#define MULTICOREPROJECT_COMPANY_H

#include "string"
#include "Day.h"
#include "vector"

using namespace std;

class Company {
public:
    Company();

    int id;
    string name;
    string namad;
    Day days[10000];
    int daysLength;

    Company(int id, const string &name, const string &namad);

};


#endif //MULTICOREPROJECT_COMPANY_H
