#include "righe.h"

unsigned int conta_righe(FILE *f){
	
	unsigned int cr = 1;
	
	while (1){
		int c = fgetc(f);
		if (c == EOF)
			break;
		if (c == '\n')
			++cr;
	}
	
	return cr;
}