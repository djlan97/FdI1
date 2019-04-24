#include "array.h"

int main(void){

	double arr1[] = { 1, 2, 3 }, arr2[] = { 1, 2, 3 };
	size_t n = sizeof(arr1) / sizeof(*arr1);
	double *ris = array_somma(arr1, arr2, n);

	free(ris);

	return 0;
}