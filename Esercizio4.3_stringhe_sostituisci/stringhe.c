#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <string.h>
char *sostituisci(const char *str, const char *vecchia, const char *nuova){
	
	const char *cur, *prev = str;
	char *s = NULL;
	size_t ssize = 0, nsize, vsize;
	if (str == NULL || vecchia == NULL || nuova == NULL)
		return NULL;
	if (*vecchia == 0){
		s = malloc(strlen(str) + 1);
		return strcpy(s, str);
	}


	nsize = strlen(nuova);
	vsize = strlen(vecchia);

	while (1){
		cur = strstr(prev, vecchia);
		if (cur == NULL)
			break;
		s = realloc(s, ssize + cur - prev + nsize + 1);
		strncpy(s + ssize, prev, cur - prev);
		ssize += cur - prev;
		strcpy(s + ssize, nuova);
		ssize += nsize;
		prev = cur + vsize;
	}
	s = realloc(s, ssize + strlen(prev) + 1);
	strcpy(s + ssize, prev);


	return s;
}