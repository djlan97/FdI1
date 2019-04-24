#include "matrix.h"

struct matrix *mat_replica(const struct matrix *a, int dir){

	struct matrix *ris = malloc(sizeof(struct matrix));
	ris->data = malloc(2 * a->rows*a->cols* sizeof(double));

	if (dir != 0){

		ris->rows = 2 * a->rows;
		ris->cols = a->cols;

		for (size_t r = 0; r < a->rows; ++r){

			for (size_t c = 0; c < a->cols; ++c){
				ris->data[r*a->cols + c] = a->data[r*a->cols + c];
				ris->data[(r + a->rows)*a->cols + c] = a->data[r*a->cols + c];
			}
		}



	}
	else{

		ris->rows = a->rows;
		ris->cols = 2*a->cols;

		for (size_t r = 0; r < a->rows; ++r){

			for (size_t c = 0; c < a->cols; ++c){
				ris->data[r*ris->cols+c] = a->data[r*a->cols + c];
				ris->data[r*ris->cols + c + a->cols] = a->data[r*a->cols + c];
			}
		}

	}


	return ris;
}