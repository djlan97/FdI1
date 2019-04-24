#include "array.h"

double *array_somma(const double *arr1, const double *arr2, size_t n){
	double *p = malloc(n*sizeof(double));
	for (size_t i = 0; i < n; ++i)
		p[i] = arr1[i] + arr2[i];

	return p;
}