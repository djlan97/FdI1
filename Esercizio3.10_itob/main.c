#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
extern void itob(unsigned int x, char *sz, size_t n);

int main(void){
	char s[100];

	itob(10, s, 8);

	fprintf(stdout, "%s", s);

	return 0;
}