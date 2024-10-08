#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#define min(a, b) ((a) < (b) ? (a) : (b))
#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binarySearch(int *array, int l, int h, int value);
int binary__search(int *array, int i, int n, int value);
int advanced_binary(int *array, size_t size, int value);


#endif
