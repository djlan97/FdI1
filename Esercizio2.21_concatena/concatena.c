#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <string.h>	

char *concatena(const char *s1, const char *s2){
	char *res = malloc((strlen(s1) + strlen(s2) + 1)*sizeof(char));
	strcpy(res, s1);
	strcat(res, s2);

	return res;
}