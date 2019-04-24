#define _CRT_SECURE_NO_WARNINGS
#include "matrix.h"


void matrix_write(const struct matrix *matr, FILE *f){

	fprintf(stdout, "%i\n%i\n", matr->rows, matr->cols);

	for (size_t r = 0; r < matr->rows; ++r){
		fprintf(stdout, "%f", matr->data[r*matr->cols]);
		for (size_t c = 0; c < matr->cols; ++c){
			fprintf(stdout, "\t%f", matr->data[r*matr->cols+c]);
		}

		fputc('\n', stdout);
	}

}