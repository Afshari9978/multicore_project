//
// Created by afshari9978 on 4/25/21.
//

#include "load_sqlite.h"
#include <iostream>
#include <sqlite3.h>

using namespace std;

int db_select(string sql, int (*callback)(void*, int, char**, char**)) {
    sqlite3 *DB;
    int exit = sqlite3_open("/home/afshari9978/Projects/multicore_project/load_sqlite/mysqlite.db", &DB);
    string data("CALLBACK FUNCTION");

    if (exit) {
        std::cerr << "Error open DB " << sqlite3_errmsg(DB) << std::endl;
        return (-1);
    } else
        std::cout << "Opened Database Successfully!" << std::endl;

    int rc = sqlite3_exec(DB, sql.c_str(), callback, (void *) data.c_str(), NULL);

    if (rc != SQLITE_OK)
        cerr << "Error SELECT" << endl;
    else {
        cout << "Operation OK!" << endl;
    }

    sqlite3_close(DB);
    return (0);
}
