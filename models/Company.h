//
// Created by afshari9978 on 4/25/21.
//

#ifndef MULTICOREPROJECT_COMPANY_H
#define MULTICOREPROJECT_COMPANY_H

#include "string"

using namespace std;

class Company {
public:
    int id;
    string name;
    string namad;

    Company(int id, const string &name, const string &namad);
};

#endif //MULTICOREPROJECT_COMPANY_H
