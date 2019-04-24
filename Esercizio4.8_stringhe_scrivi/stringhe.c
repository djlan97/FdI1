#define _CRT_SECURE_NO_WARNINGS
#include "stringhe.h"

void stringhe_scrivi(const char *filename, const char **vs, size_t n){

	FILE *f = fopen(filename, "wb");
	if (f == NULL){
		return;
	}


	for (size_t i = 0; i < n; ++i){

			fwrite(vs[i],1,strlen(vs[i])+1,f);
		
	}




	fclose(f);

	
}