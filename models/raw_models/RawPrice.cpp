//
// Created by afshari9978 on 5/1/21.
//

#include "RawPrice.h"

RawPrice::RawPrice(
        int companyId,
        int dateRow,
        const string &high,
        const string &low,
        const string &close,
        const string &open,
        const string &first,
        const string &grad,
        const string &valTrades,
        const string &numShares,
        const string &numTrades,
        const string &closeAdj
) :
        company_id(companyId),
        dateRow(dateRow),
        high(high), low(low),
        close(close), open(open),
        first(first), grad(grad),
        valTrades(valTrades),
        numShares(numShares),
        numTrades(numTrades),
        closeAdj(closeAdj) {}

RawPrice::RawPrice() {

}
