//
// Created by afshari9978 on 5/1/21.
//

#ifndef MULTICOREPROJECT_RAWPRICE_H
#define MULTICOREPROJECT_RAWPRICE_H


#include "string"

using namespace std;

class RawPrice {
public:
    int company_id;
    int dateRow;
    string high;
    string low;
    string close;
    string open;
    string first;
    string grad;
    string valTrades;
    string numShares;
    string numTrades;
    string closeAdj;

    RawPrice(int companyId, int dateRow, const string &high, const string &low, const string &close, const string &open,
             const string &first, const string &grad, const string &valTrades, const string &numShares,
             const string &numTrades, const string &closeAdj);
};


#endif //MULTICOREPROJECT_RAWPRICE_H
