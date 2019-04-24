extern char *concatena(const char *prima, const char *seconda);

#include <stdlib.h>

int main(void)
{
	char s1[] = "Questa è la ";
	char s2[] = "stringa risultante.";
	char *s;
	s = concatena(NULL,s2);
	free(s);
	return 0;
}