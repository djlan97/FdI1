#include "matrici.h"

int main(void){

	double a[] = {
	1, 2, 3, 4, 
	5, 6, 7, 8, 
	9, 10,11,12,
	13,14,15,16
	};

	double *d = diag(a,4);

	free(d);
	return 0;
}