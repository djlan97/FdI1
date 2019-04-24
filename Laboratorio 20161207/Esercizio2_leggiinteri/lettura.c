#define _CRT_SECURE_NO_WARNINGS
#include "lettura.h"

int *leggiinteri(const char *filename, size_t *size){
	FILE *f = fopen(filename, "rb");
	
	if (f == NULL)
		return NULL;

	fread(size,sizeof(size_t),1,f);
	if (feof(f)){

		fclose(f);
		return NULL;
	}
		
	if (ferror(f)){
		fclose(f);
		return NULL;
	}

	int *c = malloc(*size*sizeof(int));

	fread(c,4,*size,f);
	if (feof(f)){

		fclose(f);
		return NULL;
	}

	if (ferror(f)){
		fclose(f);
		return NULL;
	}
	fclose(f);
	return c;

}