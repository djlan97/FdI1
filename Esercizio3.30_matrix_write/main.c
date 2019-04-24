#define _CRT_SECURE_NO_WARNINGS
#include "matrix.h"

int main(void){

	double data[] = {1,2,3,4,5,6};

	struct matrix a = {2,3,data};

	FILE *f = fopen("out.txt", "wt");

	matrix_write(&a, f);

	fclose(f);
	
	return 0;
}