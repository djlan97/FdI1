#include <stdlib.h>
#include <string.h>
size_t conta_parole(const char *s){
	if (s[0] == 0 || s == NULL)
		return 0;

	int inparola;

	if (s[0] == ' ')
		inparola = 0;
	else
		inparola = 1;

	size_t c = 0;
	for (size_t i = 1; s[i] != 0; ++i){
		if (inparola){
			if (s[i] == ' '){
				++c;
				inparola = 0;
			}
		}
		else{
			if (s[i] != ' ')
				inparola = 1;
		}
	}

	if (inparola)
		++c;

	return c;
	
}