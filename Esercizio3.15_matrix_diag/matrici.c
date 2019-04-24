#include "matrici.h"

double *diag(double *matr, size_t n){
	double *diag = NULL;
	if (matr != NULL && n != 0){

		diag = malloc(n*sizeof(double));


		for (size_t i = 0; i < n; ++i){
			diag[i] = matr[i*n + i];
		}


		
	}

	return diag;
}