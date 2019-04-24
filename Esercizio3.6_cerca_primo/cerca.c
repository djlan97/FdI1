#include <string.h>
#include <stdlib.h>


char *cerca_primo(char *s, const char *list){

	char *res = NULL;

	for (size_t i = 0; list[i] != 0 && res==NULL; ++i){
		res = strchr(s, list[i]);		
	}

	return res;
}