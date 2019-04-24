#include "matrix.h"

int main(void){
	double data1[] = { 
		1, 2, 3,
		0, 5, 6,
		0, 8, 7};
	struct matrix a;
	a.rows = 3;
	a.cols = 3;
	a.data = data1;
	int ret = mat_isupper(&a);


	return 0;
}