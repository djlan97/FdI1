#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

void histogram(const char *values, size_t n){

	if (values != NULL && n != 0){


		for (size_t i = 0; i < n; ++i){


			for (char j = 0; j < values[i]; ++j)

				fputc('*', stdout);
			fputc('\n', stdout);
		}
	}
}