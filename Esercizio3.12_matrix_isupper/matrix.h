#if !defined MATRIX_H
#define MATRIX_H

#include <stdlib.h>



struct matrix{
	size_t rows,cols;
	double *data;
};


extern int mat_isupper(const struct matrix *matr);

#endif /*MATRIX_H*/