#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void stampa_cornicetta(const char *s){

	size_t sz = strlen(s);
	putchar('/');
	for (size_t i = 0; i < (sz + 2); ++i)
		putchar('-');

	fprintf(stdout, "\\\n| %s |\n\\",s);  //la funz puts()va a capo direttamente dopo la scrittura!

	for (size_t i = 0; i < (sz + 2); ++i)
		putchar('-');
	fprintf(stdout, "/\n");

	return;
}