#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int cercaMassimo(const char *filename){
	FILE *f = fopen(filename, "rt");	

	int max = 0, num=0;


	while ((fscanf(f, " %i", &num))==1){
		if (max < num)
			max = num;
	}
	fclose(f);
	return max;
}