#define _CRT_SECURE_NO_WARNINGS
#include "lettura.h"

int *leggiinteri2(const char *filename, size_t *size)
{

	FILE *f = fopen(filename, "rb");

	if (f == NULL)
		return NULL;

	fseek(f, 0, SEEK_END);

	*size = ftell(f)/sizeof(*size);

	rewind(f);

	if (*size == 0){
		fclose(f);
		return NULL;
	}
		


	int *c = malloc(*size*sizeof(int));

	fread(c, 4, *size, f);
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