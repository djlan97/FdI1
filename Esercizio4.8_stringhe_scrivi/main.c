#include "stringhe.h"

int main(void){
	char *s[] = { "prima stringa", "seconda stringa", "acaso" };

	stringhe_scrivi("out.txt", s, sizeof(s)/sizeof(s[0]));

	return 0;
}