#if !defined MATRIX_H
#define MATRIX_H

#include <stdlib.h>
#include <stdio.h>

struct matrix{
	size_t rows, cols;
	double *data;
};

extern void matrix_write(const struct matrix *matr, FILE *f);

#endif/*MATRIX_H*/