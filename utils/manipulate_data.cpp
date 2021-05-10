//
// Created by afshari9978 on 5/3/21.
//

#include <algorithm>
#include <iostream>
#include "manipulate_data.h"
#include "../models/Company.h"

#define COMPANIES_COUNT 736

extern Company companies[];


void sortDays() {
    cout << "sortDays" << endl;
    for (int i = 0; i < COMPANIES_COUNT; i++) {
        for (int j = 0; j < 10000; j++) {
            if (companies[i].days[j].date.empty()) {
                companies[i].daysLength = j;
                break;
            }
        }
        reverse(companies[i].days, companies[i].days + companies[i].daysLength);

    }
}
