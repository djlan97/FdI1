#include <stdlib.h>
void riempi_lung(const char *p, size_t *lung){
	for (*lung = 0; p[*lung] != 0; ++(*lung));
	return;
}
int main(void){
	size_t lung;
	char str[100] = "Questa e' una stringa lunga 41 caratteri.";
	riempi_lung(str, &lung);
	return 0;
}