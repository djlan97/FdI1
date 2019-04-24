#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern void stampa_onde(FILE *f, int n);

int main(void){

	FILE *f = fopen("out.txt", "wt");


	stampa_onde(f, 2);


	fclose(f);


	return 0;
}