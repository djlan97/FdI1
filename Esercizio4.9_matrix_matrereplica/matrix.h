#if !defined MATRIX_H
#define MATRIX_H

#include <stdlib.h>

struct matrix{
	size_t rows, cols;
	double *data;
};


extern struct matrix *mat_replica(const struct matrix *a, int dir);

#endif/*MATRIX_H*/