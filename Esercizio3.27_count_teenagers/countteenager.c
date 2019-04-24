#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

struct person{
	char name[256];
	unsigned int age;
};

size_t count_teenagers(FILE *f){

	size_t n;

	size_t letti = fscanf(f, "%i", &n);
	if (letti != 1){
		return 0;
	}
	size_t c = 0;
	int tmp;
	for (size_t i = 0; i < n; ++i){
		fscanf(f, "%s");

		letti = fscanf(f,"%i",&tmp);
		if (letti != 1)
			return 0;
		if (tmp>=13 && tmp <= 19)
			++c;
	}

	return 0;
}