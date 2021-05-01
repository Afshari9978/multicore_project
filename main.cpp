#include "models/raw_models/RawCompany.h"
#include "utils.h"
#include "models/raw_models/RawPrice.h"
#include "models/raw_models/RawDate.h"

#define COMPANIES_COUNT 736
// todo create classes
// todo describe candlestick techniques
// todo draw candle chart
// todo find techniques in selected company
// todo deal entrance hints

vector<RawCompany> raw_companies;
vector<RawPrice> raw_prices;
vector<RawDate> raw_dates;

int main() {

    load_raw_data();

    return 0;
}
