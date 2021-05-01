#include <iostream>
#include "openmp_tests/headers.h"
#include "load_sqlite/load_sqlite.h"
#include "models/Company.h"
#include "utils.h"

#define COMPANIES_COUNT 736
// todo load sqlite
// todo create classes
// todo load companies
// todo describe candlestick techniques
// todo draw candle chart
// todo find techniques in selected company
// todo deal entrance hints

int main() {
    vector<Company> companies;


    printf("%d", load_sqlite_data());


    load_companies(companies);

    return 0;
}
