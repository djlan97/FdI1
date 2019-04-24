#include <stdlib.h>
#include <stdio.h>

void ripeti(FILE *f, char c, unsigned char n){
	while (n > 0){
		fputc(c, f);
		--n;
	}
}



void croceromana(FILE *f, unsigned char n){
	for (size_t i = 0; i < 2u*n; ++i){// u=unsigned per non avere warning!
		ripeti(f, ' ', 2 * n);
		fputs("|\n",f);
	}
	ripeti(f, '-', 2 * n);
	fputc('+', f);
	ripeti(f, '-', 2 * n);
	fputc('\n', f);
	for (size_t i = 0; i < 2u*n; ++i){
		ripeti(f, ' ', 2 * n);
		fputs("|\n", f);
	}

	return;
}