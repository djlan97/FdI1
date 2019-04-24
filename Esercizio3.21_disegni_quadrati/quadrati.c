#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include"quadrati.h"

void ripeti(char c, unsigned int n){
	while (n > 0){
		putchar(c);
		--n;
	}
}

void stampa_quadrato(unsigned int lato){

	if (lato == 0)
		return;
	if (lato == 1){
		puts("*");
		return;
	}

	ripeti('*', lato);
	putchar('\n');
	for (unsigned int i = 0; i < lato - 2; ++i){
		putchar('*');
		ripeti(' ', lato - 2);
		puts("*");
	}
	ripeti('*', lato);

}