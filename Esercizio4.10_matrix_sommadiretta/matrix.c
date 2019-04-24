#include "matrix.h"

struct matrix *mat_sommadiretta(const struct matrix *a, const struct matrix *b){
	struct matrix *ris = malloc(sizeof(struct matrix));

	ris->rows = a->rows + b->rows;
	ris->cols = a->cols + b->cols;
	ris->data = calloc((a->cols+b->cols)*(a->rows+b->rows), sizeof(double));

	for (size_t r = 0; r < a->rows; ++r){

		for (size_t c = 0; c < a->cols; ++c){
			ris->data[r*ris->cols + c] = a->data[r*a->cols+c];
		}
	}


	for (size_t r = 0; r < b->rows; ++r){

		for (size_t c = 0; c < b->cols; ++c){
			
			ris->data[(a->rows+r)*ris->cols+(c+a->cols)] = b->data[r*b->cols + c];
		}
	}


	return ris;
}