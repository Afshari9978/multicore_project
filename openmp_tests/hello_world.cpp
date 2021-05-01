//
// Created by afshari9978 on 4/23/21.
//

#include <omp.h>
#include "cstdio"

int hello_world() {
#pragma omp parallel num_threads(24) default(none)
    {
        int id = omp_get_thread_num();
        printf("hello world from thread %d\n", id);
    }
    return 0;
}