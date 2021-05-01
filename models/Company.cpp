//
// Created by afshari9978 on 4/25/21.
//

#include "Company.h"
#include "string"

using namespace std;

Company::Company(int id, const string &name, const string &namad) : id(id), name(name), namad(namad) {
    this->id = id;
    this->name = name;
    this->namad = namad;
}
