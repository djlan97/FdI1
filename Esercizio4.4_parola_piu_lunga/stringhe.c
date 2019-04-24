#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>

char *parola_piu_lunga(const char *sz){
	char *ris = NULL;
	if (sz != NULL){

		size_t lung = 0,inizio=0,fine=0,pos;

		for (size_t i = 0, parola=0; sz[i] != 0; ++i){
			if (parola){
				if (sz[i] != ' '){
					fine = i;
					if (fine - inizio+1 > lung){
						pos = inizio;
						lung = fine-inizio+1;
					}
				}
				else{
					parola = 0;
				}



			}
			else{
				if (sz[i] != ' '){
					inizio = i;
					fine = i;
					parola = 1;
				}
			}
		}

		ris = malloc(lung + 1);
		strncpy(ris, sz+pos, lung);
		ris[lung] = 0;



	}
		
	return ris;
}