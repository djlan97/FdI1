#include <stdlib.h>


int *crea_inizializza(size_t n, int val){

	int *v = malloc(n*sizeof(int));

	for (size_t i = 0; i < n; ++i, --val)
		v[i] = val;


	return v;
}