#define _CRT_SECURE_NO_WARNINGS
#include "lettura.h"

int leggiprimo(const char *filename)
{

	FILE *f=fopen(filename, "rt");
	if (f == NULL)
		return FILE_NOT_FOUND;
	int c = fgetc(f);
	fclose(f);
	return c;
	
}