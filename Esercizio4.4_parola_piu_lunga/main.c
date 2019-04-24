#include <stdlib.h>
extern char *parola_piu_lunga(const char *sz);

int main(void){

	char *res = parola_piu_lunga("ciao io sono dylan");

	free(res);
	return 0;
}