#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
extern void write_bin(const double *values, size_t n, FILE *f);
int main(void){

	FILE *f = fopen("test.bin", "wb"); 
	if (f == NULL)
		return EXIT_FAILURE;
	double v[] = {1.1,2.2,3.3};
	write_bin(v, 3, f);
	fclose(f);
	return 0;
}