#if !defined MATRIX_H
#define MATRIX_H

#include <stdlib.h>
#include <string.h>


struct matrix{
	size_t rows, cols;
	double *data;
};

extern struct matrix *mat_copy(const struct matrix *mat);

#endif/*MATRIX_H*/