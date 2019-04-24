#define _CRT_SECURE_NO_WARNINGS
#include "scrittura.h"

int scrivimaiuscolo(const char *filename)
{

	FILE *f = fopen(filename,"rt");
	if (f == NULL)
		return 0;
	int c;
	while ((c = fgetc(f))!=EOF)
	{		 
		if (islower(c))
			c = toupper(c);
		fprintf(stdout,"%c",c);
	}
	fclose(f);
	return 1;
}