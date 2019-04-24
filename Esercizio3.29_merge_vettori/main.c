#include "vettori.h"

int main(void){

	double data1[] = {1,2,3};
	double data2[] = { 4,5,6,7,8};

	struct vettore a = { 3, data1 }, b = { 5, data2 };

	struct vettore *c = mergeVettoti(&a, &b);


	free(c->data);
	free(c);

	return 0;
}