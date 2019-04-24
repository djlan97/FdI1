#include "readperson.h"

int main(void){
	FILE *f = NULL;
	struct person prova;
	person_read(f, &prova);

	char y = prova.name[0];
	y = prova.name[1];

	y = prova.name[2];

	return 0;
}