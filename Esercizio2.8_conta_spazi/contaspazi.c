#include <stdlib.h>

size_t conta_spazi(const char *s){
	
	size_t c = 0;
	
	for (size_t i = 0; s[i] != 0; ++i){
		if (s[i] == ' ')
			++c;
	}

	return c;
}