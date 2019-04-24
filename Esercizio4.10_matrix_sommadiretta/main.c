#include "matrix.h"

int main(void){

	double dataa[] = { 1, 3, 2, 2, 3, 1 };
	double datab[] = { 1,6,0,1 };

	struct matrix a = { 2, 3, dataa }, b = { 2, 2, datab }, *c = mat_sommadiretta(&a, &b);

	free(c->data);
	free(c);
	return 0;
}