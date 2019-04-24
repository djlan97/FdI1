#include <stdlib.h>
#include <stdio.h>

#if !defined MATRIX_H
#define MATRIX_H

struct matrix{
	size_t rows, cols;
	double *data;
};

extern struct matrix *mat_leggi(const char *filename);

#endif /*MATRIX_H*/