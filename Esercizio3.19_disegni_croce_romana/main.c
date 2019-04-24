#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

extern void croceromana(FILE *f, unsigned char n);

int main(void){

	FILE *f = fopen("out.txt", "wt");
	if (f == NULL)
		return EXIT_FAILURE;

	croceromana(f, 0);


	fclose(f);


	return EXIT_SUCCESS;
}