#ifndef SEARCH_ALGO_H
#define SEARCH_ALGO_H

#include <math.h>

/**
 * File: search_algos.h
 * Auth: Collen Khoza
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x1E. C - Search Algorithms.
 */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGO_H */
