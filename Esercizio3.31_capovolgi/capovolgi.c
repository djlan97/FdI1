#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


int capovolgi(const char *filein, const char *fileout){

	FILE *fi = fopen(filein, "rb");
	if (fi == NULL){
		return 0;
	}

	FILE *fo = fopen(fileout, "wb");
	if (fo == NULL){
	return 0;
	}

	fseek(fi, 0, SEEK_END);
	size_t sz = ftell(fi);
	fseek(fi, 0, SEEK_SET);

	char *p = malloc(sz*sizeof(char));
	fread(p,1,sz,fi);
	
	fclose(fi);

	for (size_t i = 0; i < sz; ++i)
		fwrite(&p[sz - i - 1], 1, 1, fo);

	fclose(fo);
	free(p);
	return 1;
}