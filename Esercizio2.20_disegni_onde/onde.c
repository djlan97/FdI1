#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void stampa_onde(FILE *f, int n){
	for (int i = 0; i < n; ++i)
		fprintf(f, " _    ");
	putc('\n', f);
	for (int i = 0; i < n; ++i)
		fprintf(f, "/ \\   ");
	putc('\n', f);
	for (int i = 0; i < n; ++i)
		fprintf(f, "   \\_/");
	putc('\n', f);
	return;
}