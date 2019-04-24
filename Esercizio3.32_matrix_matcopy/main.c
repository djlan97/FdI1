#include "matrix.h"

int main(void){

	double data[] = { 1, 2, 3, 4, 5, 6 };

	struct matrix a = { 2, 3, data };
	struct matrix *b = mat_copy(&a);

	free(b->data);
	free(b);

	return 0;
}