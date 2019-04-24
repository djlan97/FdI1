#include <stdlib.h>

extern char *trim(const char *s);

int main(void){


	char *p = trim(" prova ");

	free(p);

	return 0;
}