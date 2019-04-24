#define _CRT_SECURE_NO_WARNINGS
#include "lettura.h"

char *fgets_malloc(FILE *f){
	
	size_t len = 0;
	char *ris = NULL;
	int c;
	while (1){
		c = fgetc(f);
		if (c == '\n' || c == EOF){
			break;
		}

		++len;
		ris = realloc(ris, len + 1);
		ris[len - 1] = c;
		
	}
	if (ris == NULL && c==EOF){
		return NULL;
	}
	ris = realloc(ris,len+1);
	ris[len] = 0;
	return ris;
}