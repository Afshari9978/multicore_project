//
// Created by afshari9978 on 4/23/21.
//
#include "omp.h"

#define NUM_THREADS 12
#define PAD 8
static long numSteps = 100000;
double step;

double pi_calculator() {
    int i, nThreads;
    double pi = 0.0;
    double sum[NUM_THREADS][PAD];
    step = 1.0 / (double) numSteps;

#pragma omp parallel num_threads(NUM_THREADS) shared(sum, numSteps, nThreads, step) default(none)
    {
        int j, id, numThreads;
        double x;
        id = omp_get_thread_num();
        numThreads = omp_get_num_threads();
        if (id == 0) nThreads = numThreads;
        for (j = id, sum[id][0] = 0.0; j < numSteps; j += numThreads) {
            x = (j + 0.5) * step;
            sum[id][0] += 4.0 / (1.0 + x * x);
        }
    }
    for (i = 0, pi = 0.0; i < nThreads; i++) pi += sum[i][0] * step;
     return pi;
}