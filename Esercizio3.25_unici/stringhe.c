#include <stdlib.h>
#include <string.h>

char *unici(const char *s){

	char *ris = malloc(1);
	ris[0] = 0;
	if (s != NULL){		

		size_t j = 0;
		for (size_t i = 0 ; s[i] != 0; ++i){
			if (strchr(ris, s[i]) == NULL){
				
				ris = realloc(ris,j+1);
				ris[j] = s[i];
				++j;
			}
		}

		ris = realloc(ris, j + 1);
		ris[j] = 0;




	}



	return ris;
}