#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


void ripeti_ch(FILE *f,char c,unsigned char n){
	
	while (n > 0){
		fputc(c, f);
		--n;
	}
}


void capsula(FILE *f, unsigned char n){

	ripeti_ch(f,' ', n);
	ripeti_ch(f,'_', n);
	fputc('\n', f);
	for (size_t i = 0; i < n; ++i){
		ripeti_ch(f,' ', n - 1- i);
		fputc('/', f);
		ripeti_ch(f,' ', n + 2 * i);
		fputc('\\', f);
		fputc('\n', f);
	}

	for (size_t i = 0; i < n; ++i){
		fputc('|', f);
		ripeti_ch(f,' ', 3*n-2);
		fputc('|', f);
		fputc('\n', f);
	}

	for (size_t i = n-1; i > 0; --i){
		ripeti_ch(f,' ', n - 1 - i);
		
		fputc('\\', f);
		ripeti_ch(f,' ', n + 2 * i);
		fputc('/', f);
		fputc('\n', f);
		
								
	}

	ripeti_ch(f,' ', n - 1);
	fputc('\\', f);	
	ripeti_ch(f,'_', n);
	fputc('/',f);
	fputc('\n', f);

	return;
}