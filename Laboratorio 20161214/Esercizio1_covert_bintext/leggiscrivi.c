#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int txt2bin(const char *srcTxtFile, const char *dstBinFile){
	FILE *f = fopen(srcTxtFile, "rt");
	if (f == NULL)
		return 0;
	int c;
	int i;
	float fl;

	int letti = fscanf(f,"%i%i%f",&c,&i,&fl);
	if (letti != 3){
		if (feof(f)){
			fclose(f);
			return 0;
		}
		if (ferror(f)){
			fclose(f);
			return 0;
		}
	}
	fclose(f);
	f= fopen(dstBinFile, "wb");
	if (f == NULL)
		return 0;

	fwrite(&c, sizeof(char),1,f);
	fwrite(&i, sizeof(int),1,f);
	fwrite(&fl, sizeof(float),1,f);
	


	fclose(f);
	return 1;
}

int bin2txt(const char *srcBinFile, const char *dstTxtFile){
	FILE *f = fopen(srcBinFile,"rb");
	if (f == NULL)
		return 0;
	char c;
	int i;
	float fl;

	size_t letti = fread(&c, sizeof(char),1,f);
	letti += fread(&i, sizeof(int), 1, f);
	letti += fread(&fl, sizeof(fl), 1, f);
	if (letti != 3){
		if (feof(f)){
			fclose(f);
			return 0;
		}
		if (ferror(f)){
			fclose(f);
			return 0;
		}
	}
	fclose(f);

	f = fopen(dstTxtFile, "wt");
	if (f == NULL)
		return 0;
	fprintf(f,"%i %i %f",c,i,fl);	

	fclose(f);
	return 1;
}