#include "matrix.h"

int main(void){

	struct matrix a = {2,3,NULL};	
	a.data = malloc(a.rows*a.cols*sizeof(double));
	a.data[0] = 1;
	a.data[1] = 2;
	a.data[2] = 3;
	a.data[3] = 4;
	a.data[4] = 5;
	a.data[5] = 6;
	
	mat_copy(&a);
	return 0;
}