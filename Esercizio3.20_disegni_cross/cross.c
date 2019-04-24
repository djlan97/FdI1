#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void ripeti(char c, unsigned int n){

	while (n > 0){
		putchar(c);
		--n;
	}
}


void stampa_cross(unsigned int n){

	for (size_t i = 0; i < n; ++i){
		ripeti(' ', i);
		putchar('\\');
		ripeti(' ', 2*n-2*i-1);
		puts("/");
	}
	ripeti(' ', n);
	puts("x");

	for (size_t i = 0; i < n; ++i){
		ripeti(' ', n - i - 1);
		putchar('/');
		ripeti(' ', 2*i+1);
		puts("\\");
	}
}