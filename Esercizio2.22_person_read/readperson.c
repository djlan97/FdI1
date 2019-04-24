#define _CRT_SECURE_NO_WARNINGS
#include "readperson.h"

void person_read(FILE *f, struct person *pp){
	fscanf(f, "%s%i", pp->name, &(pp->age));
	return;
}