//
// Created by afshari9978 on 4/25/21.
//
#include <iostream>

using namespace std;

#ifndef MULTICORE_PROJECT_LOAD_SQLITE_H
#define MULTICORE_PROJECT_LOAD_SQLITE_H

int db_select(string sql, int (*callback)(void *, int, char **, char **));

#endif //MULTICORE_PROJECT_LOAD_SQLITE_H
