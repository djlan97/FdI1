#include "righe.h"

int main(void){

	FILE *f = fopen("prova.txt", "rt");

	unsigned int c = conta_righe(f);

	fclose(f);

	return 0;
}