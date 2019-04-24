#include <stdlib.h>
#include <string.h>

int is_hex(const char *s){

	if (s!=NULL && s[0] == '0' && (s[1] == 'x' || s[1] == 'X')){
		size_t sz = strlen(s)-2;
		if (sz > 8 || sz==0)
			return 0;
		
		char cmp[] = "0123456789abcdefABCDEF";
		for (size_t i = 2; s[i] != 0; ++i){
			if (strchr(cmp, s[i]) == NULL)
				return 0;
		}
		
		
		return 1;
	}
	return 0;
}