#include <stdlib.h>

char *trim(const char *s){
	
	char *ris = NULL;
	
	if (s != NULL){
		


		size_t inizio, fine;

		for (size_t i = 0; s[i] != 0; ++i){
			if (s[i] != ' '){
				inizio = i;
				break;
			}
		}

		for (size_t i = 0; s[i] != 0; ++i){
			if (s[i] != ' '){
				fine = i;
			}
		}

		ris = calloc(fine - inizio + 2, 1);

		for (size_t i=0; inizio <= fine; ++inizio,++i){
			ris[i] = s[inizio];
		}

	}

	
	return ris;
}