#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

extern size_t count_teenagers(FILE *f);

int main(void){
	FILE *f = fopen("people.txt", "rt");

	size_t c = count_teenagers(f);

	fclose(f);

	return 0;
}