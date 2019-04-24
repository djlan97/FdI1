#define _CRT_SECURE_NO_WARNINGS
#include "matrix.h"

extern struct matrix *mat_leggi(const char *filename){
	
	FILE *f = fopen(filename, "rt");
	if (f == NULL)
		return NULL;

	struct matrix *mat = malloc(sizeof(struct matrix));
	int leggi;
	leggi=fscanf(f, "%i", &(mat->rows));	
	if (leggi != 1){
		if (feof(f)){
			fclose(f);
			return NULL;
		}
		if (ferror(f)){
			fclose(f);
			return NULL;
		}
	}

	fscanf(f, "%i", &(mat->cols));

	if (leggi != 1){
		if (feof(f)){
			fclose(f);
			return NULL;
		}
		if (ferror(f)){
			fclose(f);
			return NULL;
		}
	}


	mat->data = malloc(mat->rows*mat->cols*sizeof(double));
	
	for (size_t i = 0; i < (mat->rows*mat->cols); ++i){
		leggi=fscanf(f, "%lf", &(mat->data[i]));
		if (leggi != 1){
			if (feof(f)){
				fclose(f);
				return NULL;
			}
			if (ferror(f)){
				fclose(f);
				return NULL;
			}
		}
	}

	fclose(f);
	return mat;
}