#define _CRT_SECURE_NO_WARNINGS
#include "lettura.h"

int main(void){

	FILE *f = fopen("in.txt", "rt");
	if (f == NULL){
		return EXIT_FAILURE;
	}
	char *c = fgets_malloc(f);


	fclose(f);
	free(c);

	return 0;
}