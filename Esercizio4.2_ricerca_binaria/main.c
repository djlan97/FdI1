#include <stdlib.h>

extern int ricerca_binaria(const int *v, size_t n, int x);

int main(void){


	int p[8] = { 1, 2, 3, 5, 6, 7, 8, 9 };
	int ris = ricerca_binaria(p, 0, 6);
	return 0;
}