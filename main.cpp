#include "map"
#include <chrono>
#include "omp.h"

#include "models/raw_models/RawCompany.h"
#include "models/raw_models/RawPrice.h"
#include "models/raw_models/RawDate.h"
#include "models/Company.h"
#include "utils/load_data.h"
#include "utils/raw_data.h"
#include "utils/manipulate_data.h"
#include "utils/find_technique.h"

#define THREADS_COUNT 12

#define COMPANIES_COUNT 736
#define DATES_COUNT 1561205
#define PRICES_COUNT 1561205

using namespace std;
using namespace chrono;

// todo describe all techniques
// todo change threads count
// todo check all for types
// todo static / dynamic threads
// todo database order instead of sort in c++
// todo change db
// todo load db batch to multi thread it
// todo draw candles to file

RawCompany raw_companies[COMPANIES_COUNT];
RawPrice raw_prices[PRICES_COUNT];
RawDate raw_dates[DATES_COUNT];
Company companies[COMPANIES_COUNT];


steady_clock::time_point timeCalculator(steady_clock::time_point begin) {
    steady_clock::time_point now = steady_clock::now();
    cout << duration_cast<milliseconds>(now - begin).count() << " ms" << endl;
    return now;
}

int main() {
    chrono::steady_clock::time_point now;
    chrono::steady_clock::time_point start;
    omp_set_num_threads(THREADS_COUNT);

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

