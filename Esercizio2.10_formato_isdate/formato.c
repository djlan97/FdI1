#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int isdate(const char *s){
	
	if (s == NULL || strlen(s) != 10)
		return 0;

	int gg = (isdigit(s[0]) && isdigit(s[1]));
	int sl = s[2] == '/'&&s[5] == '/';
	int mm = isdigit(s[3]) && isdigit(s[4]);
	int aa = isdigit(s[6]) && isdigit(s[7]) && isdigit(s[8]) && isdigit(s[9]);
	return gg&&mm&&sl&&aa;
}