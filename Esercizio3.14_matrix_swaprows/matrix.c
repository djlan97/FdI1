#include "matrix.h"

void mat_swapows(struct matrix *mat, size_t r1, size_t r2){
	double tmp;


	for (size_t c = 0; c < mat->cols;++c){
		tmp = mat->data[r1*mat->cols+c];
		mat->data[r1*mat->cols + c] = mat->data[r2*mat->cols + c];
		mat->data[r2*mat->cols + c] = tmp;
	}

	return;

}