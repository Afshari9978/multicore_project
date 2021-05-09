#include "map"
#include <chrono>

#include "models/raw_models/RawCompany.h"
#include "models/raw_models/RawPrice.h"
#include "models/raw_models/RawDate.h"
#include "models/Company.h"
#include "utils/load_data.h"
#include "utils/raw_data.h"
#include "utils/manipulate_data.h"
#include "utils/find_technique.h"

#define COMPANIES_COUNT 736

using namespace std;
using namespace chrono;

// todo find techniques in selected company
// todo deal entrance hints
// todo describe all techniques
// todo change threads count
// todo check all for types
// todo static / dynamic threads
// todo database order instead of sort in c++
// todo change db
// todo load db batch to multi thread it
// todo remove break s for increase time
// todo draw candles to file

map<int, RawCompany> raw_companies;
map<string, RawPrice> raw_prices;
map<string, RawDate> raw_dates;
map<int, Company> companies;


steady_clock::time_point timeCalculator(steady_clock::time_point begin) {
    steady_clock::time_point now = steady_clock::now();
    cout << duration_cast<milliseconds>(now - begin).count() << " ms" << endl;
    return now;
}

int main() {
    chrono::steady_clock::time_point now;
    chrono::steady_clock::time_point start;

    now = chrono::steady_clock::now();
    loadRawData();
    now = timeCalculator(now);
    start = chrono::steady_clock::now();
    loadDays();
    now = timeCalculator(now);
    sortDays();
    now = timeCalculator(now);
    findTechniques();
    now = timeCalculator(now);

    cout << "totalTime" << endl;
    timeCalculator(start);
    return 0;
}

