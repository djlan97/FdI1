#define _CRT_SECURE_NO_WARNINGS
#include "decode.h"

void decode(FILE *f){


	while (1){
		int c=fgetc(f);
		if (c == EOF)
			break;
		if (isdigit(c)){
			size_t n = c - '0';
			c = fgetc(f);
			if (c == EOF)
				break;
			for (size_t i = 0; i < n; ++i)
				putchar(c);
		}
		else{
			putchar(c);
		}
	}


	return;
}