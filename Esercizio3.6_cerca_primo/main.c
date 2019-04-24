#include <string.h>
#include <stdlib.h>


extern char *cerca_primo(char *s, const char *list);

int main(void){

	char s[] = "aereo", list[] = "fyr";

	char *p=cerca_primo(s, list);

	return 0;
}