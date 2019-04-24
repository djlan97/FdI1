#include <stdlib.h>
#include <stdio.h>

struct person{
	char name[256];
	unsigned int age;
};


extern void person_read(FILE *f, struct person *pp);