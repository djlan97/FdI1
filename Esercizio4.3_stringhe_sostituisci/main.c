#include <stdlib.h>
#include <string.h>
extern char *sostituisci(const char *str, const char *vecchia, const char *nuova);

int main(void){

	char str[] = "qui cambia la parola cambia", vecchia[] = "cambia", nuova[] = "sostituisci";

	char *s=sostituisci(str, vecchia, nuova);

	free(s);

	return 0;
}