#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int rimuovidoppie(const char *filein, const char *fileout){
	FILE *f = fopen(filein, "rt");
	FILE *g = fopen(fileout, "wt");
	if (f == NULL || g == NULL)
		return 0;

	int c,prec=-1;

	while (1){
		c = fgetc(f);
		if (c == EOF)
			break;
		if (prec != c){
			fputc(c, g);
			prec = c;
		}
	}

	fclose(f);
	fclose(g);

	return 1;
}