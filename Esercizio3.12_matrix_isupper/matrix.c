#include "matrix.h"

int mat_isupper(const struct matrix *matr){

	if (matr->cols != matr->rows)
		return 0;

	for (size_t r = 0; r < matr->rows; ++r){
		for (size_t c = 0; c < r; ++c){
			if (matr->data[r*(matr->cols) + c] != 0)
				return 0;
		}
	}


	return 1;
}