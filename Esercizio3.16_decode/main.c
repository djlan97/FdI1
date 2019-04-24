#define _CRT_SECURE_NO_WARNINGS
#include "decode.h"

int main(void){

	FILE *f = fopen("prova1.txt", "rt");
	if (f == NULL)
		return 0;

	decode(f);

	fclose(f);

	return 0;
}