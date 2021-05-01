//
// Created by afshari9978 on 4/25/21.
//

#ifndef MULTICOREPROJECT_RAWCOMPANY_H
#define MULTICOREPROJECT_RAWCOMPANY_H

#include "string"

using namespace std;

class RawCompany {
public:
    int id;
    string name;
    string namad;

    RawCompany(int id, const string &name, const string &namad);
};

#endif //MULTICOREPROJECT_RAWCOMPANY_H
