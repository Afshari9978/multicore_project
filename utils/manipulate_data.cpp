//
// Created by afshari9978 on 5/3/21.
//

#include <algorithm>
#include <iostream>
#include "manipulate_data.h"
#include "../models/Company.h"
#include "map"

#define COMPANIES_COUNT 736

extern map<int, Company> companies;


vector<Day> daySorter(vector<Day> *days) {
    vector<Day> *cats_copy = (days);
    sort(cats_copy->begin(), cats_copy->end());
    return *days;
}

void sortDays() {
    cout << "sortDays" << endl;
    for (int i = 0; i < COMPANIES_COUNT; i++) {
        daySorter(&companies.find(i)->second.days);
    }
}
