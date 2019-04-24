#include <stdlib.h>
#include <string.h>	

extern char *concatena(const char *s1, const char *s2);

int main(void){

	char s1[] = "prova", s2[] = "test";

	char *s3 = concatena(s1, s2);


	free(s3);
	return 0;
}