//
// Created by afshari9978 on 5/3/21.
//

#ifndef MULTICOREPROJECT_FIND_TECHNIQUE_H
#define MULTICOREPROJECT_FIND_TECHNIQUE_H

#include "../models/CandlestickTechnique.h"
#include "../models/Company.h"

bool findTechnique(vector<int> &days, const CandlestickTechnique &technique, const Company &company);

void findTechniques();

#endif //MULTICOREPROJECT_FIND_TECHNIQUE_H
