#include "matrix.h"

void mat_swapcols(struct matrix *mat, size_t c1, size_t c2){


	double tmp;


	for (size_t r = 0; r < mat->rows; ++r){
		tmp=mat->data[c1 + r*mat->cols];
		mat->data[c1 + r*mat->cols] = mat->data[c2 + r*mat->cols];
		mat->data[c2 + r*mat->cols] = tmp;
	}

	return;
}