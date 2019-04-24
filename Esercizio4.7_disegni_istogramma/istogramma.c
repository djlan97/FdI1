#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

void disegna(uint8_t *h, size_t n, FILE *fout){

	size_t max = 0;

	for (size_t i = 0; i < n; ++i){
		if (h[i]>max)
			max = h[i];
	}

	for (size_t i = 0; i < max; ++i){
		for (size_t j = 0; j < n; ++j){
			if (h[j] >= max - i){
				fputc('|',fout);
			}
			else{
				fputc(' ', fout);
			}
		}
		fputc('\n', fout);
	}

}