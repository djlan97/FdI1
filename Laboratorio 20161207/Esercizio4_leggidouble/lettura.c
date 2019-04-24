#define _CRT_SECURE_NO_WARNINGS
#include "lettura.h"

double *leggidouble(const char *filename, size_t *size){

	FILE *f = fopen(filename, "rt");
	if (f == NULL){		
		return NULL;
	}

	
	int i = 0;
	double tmp = 0;
	for (int n = fscanf(f, "%lf", &tmp); n != EOF; ++i)
			n=fscanf(f, "%lf",&tmp);
	if (i == 0)
		return NULL;
	*size = i;
	
	double *p = malloc(*size*sizeof(*p));
	rewind(f);
	for (size_t j = 0 ;j<*size;++j)
		fscanf(f, "%lf",&p[j]);

	fclose(f);

	return p;
}