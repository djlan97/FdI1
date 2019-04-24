#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

void write_bin(const double *values, size_t n, FILE *f){
	if (values!=NULL && n!=0)
		fwrite(values, sizeof(double), n, f);
	
	return;
}