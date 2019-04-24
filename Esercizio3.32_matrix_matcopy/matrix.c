#include "matrix.h"

struct matrix *mat_copy(const struct matrix *mat){
	struct matrix *ris = malloc(sizeof(struct matrix));
	ris->rows = mat->rows;
	ris->cols = mat->cols;
	ris->data = malloc(ris->cols*ris->rows*sizeof(double));

	memcpy(ris->data, mat->data, ris->cols*ris->rows*sizeof(double));


	return ris;
}