#include <stdlib.h>
extern char *unici(const char *s);

int main(void){

	char *p = unici("ciao casa");

	free(p);

	return 0;
}