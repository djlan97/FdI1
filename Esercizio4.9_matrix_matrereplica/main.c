#include "matrix.h"

int main(void){

	double data[] = {1,2,3,4,5,6};

	struct matrix a = { 2, 3, data };


	struct matrix *b = mat_replica(&a, 0);

	free(b);

	return 0;
}