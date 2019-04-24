#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <string.h>

int accodaTuttiFile(const char *fileConNomi, const char *fileOutput){
	FILE *fcn = fopen(fileConNomi, "rt");
	FILE *fout = fopen(fileOutput, "wb");


	if (fcn == NULL || fout == NULL){
		return 0;
	}
	int n = 0;
	char filename[256];
	while (fgets(filename, 256, fcn) != NULL){
		if (filename[strlen(filename) - 1] == '\n'){
			filename[strlen(filename) - 1] = 0;
		}

		FILE *fnew = fopen(filename, "rb");
		if (fnew == NULL){
			continue;
		}
			

		int c;

		while ((c = fgetc(fnew)) != EOF){
			fputc(c, fout);
		}
		fclose(fnew);
		++n;
	}


	fclose(fcn);
	fclose(fout);
	return n;
}