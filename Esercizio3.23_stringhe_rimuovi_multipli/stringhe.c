#include <stdlib.h>

char *rimuovimultipli(const char *str){

	char *ris = NULL;
	if (str != NULL){
		size_t j = 0;
		for (size_t i = 0; str[i] != 0; ++i){
			if (str[i] != str[i + 1]){
				++j;
				ris = realloc(ris, (j)*sizeof(char));
				ris[j - 1] = str[i];
			}
		}
		ris = realloc(ris, (j)*sizeof(char));
		ris[j] = 0;
	}


	return ris;
}