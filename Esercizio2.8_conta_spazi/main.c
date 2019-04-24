#include <stdlib.h>


extern size_t conta_spazi(const char *s);
int main(void){

	char p[] = "prova stringa in cui contare gli spazi";

	size_t c = conta_spazi(p);

	return 0;
}