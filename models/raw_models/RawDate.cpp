//
// Created by afshari9978 on 5/1/21.
//

#include "RawDate.h"
#include "string"

using namespace std;

RawDate::RawDate(int company_id, const string &date, int date_row) : company_id(company_id), date(date),
                                                                     date_row(date_row) {
    this->company_id = company_id;
    this->date = date;
    this->date_row = date_row;
}
