#include "matrix.h"

struct matrix *mat_copy(const struct matrix *mat){

	struct matrix *m = malloc(sizeof(struct matrix));
	m->rows = mat->rows;
	m->cols = mat->cols;
	m->data = malloc(m->rows*m->cols*sizeof(double));
	for (size_t i = 0; i < (m->rows*m->cols); ++i)
		m->data[i] = mat->data[i];
	return m;
}