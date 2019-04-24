#define _CRT_SECURE_NO_WARNINGS
#include "read_file.h"
#include <stdio.h>


byte *read_file(const char *szFileName, size_t *cb){

	FILE *f = fopen(szFileName, "rb");
	if (f == NULL)
		return NULL;
	unsigned char *p=NULL;	
	*cb = 0;
	
	while(1){
		int c = fgetc(f);
		if (c == EOF)
			break;
		++*cb;

		p = realloc(p, *cb*sizeof(byte));
		p[*cb - 1] = c;

	}

	fclose(f);


	return p;
}

byte *read_file2(const char *szFileName, size_t *cb){

	FILE *f = fopen(szFileName, "rb");
	if (f == NULL)
		return NULL;
	fseek(f, 0, SEEK_END);

	*cb = ftell(f);

	fseek(f, 0, SEEK_SET);

	byte *buf = malloc(*cb);
	fread(buf, 1, *cb, f);
	fclose(f);
	return buf;
}