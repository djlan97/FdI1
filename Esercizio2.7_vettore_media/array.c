#include "array.h"

double media(double *arr, size_t n){
	double s = 0;
	for (size_t i = 0; i < n; ++i)
		s += arr[i];
	
	return s/n;
}