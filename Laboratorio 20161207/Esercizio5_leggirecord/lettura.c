#define _CRT_SECURE_NO_WARNINGS
#include "lettura.h"

struct record *leggirecord(const char *filename, size_t *size){
	FILE *f = fopen(filename, "rt");
	if (f == NULL)
		return NULL;
	int letti = fscanf(f, "%i", size);
	if (letti != 1){
		
			return NULL;
	}

	struct record *pr = malloc(*size*sizeof(struct record));

	for (size_t i = 0; i < *size; ++i){
		letti = fscanf(f," %[^ =]", &((pr+i)->str));
		if (letti >STR_MAX_LEN){
			
				return NULL;			
		}
		fscanf(f, " %*[=]");
		if (feof(f)){
			fclose(f);
			return NULL;
		}
		if (ferror(f)){
			fclose(f);
			return NULL;
		}

		letti = fscanf(f,"%lf",&(pr->val));
		if (letti != 1){
			
				return NULL;
			
		}
	}

	fclose(f);

	return pr;
}