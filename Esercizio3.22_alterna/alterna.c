#include "alterna.h"

char *alterna(const char *s1, const char *s2){

	char *st = calloc(strlen(s1) + strlen(s2) + 1, sizeof(char));
	size_t i1 = 0,i2=0,it=0;
	while (s1[i1] != 0 || s2[i2] != 0){
		if (s1[i1] != 0){
			st[it] = s1[i1];
			++i1;
			++it;
		}
		if (s2[i2] != 0){
			st[it] = s2[i2];
			++i2;
			++it;
		}
	}


	return st;
}