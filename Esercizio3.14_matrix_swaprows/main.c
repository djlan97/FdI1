#include "matrix.h"

int main(void){
	
	double data[] = {
	1, 2, 
	3, 4, 
	5, 6
	};
	struct matrix a = {3,2,data};
	
	mat_swapows(&a, 1, 2);


	return 0;
}