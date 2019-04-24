#include <stdlib.h>

extern int *crea_inizializza(size_t n, int val);

int main(void){

	int *p = crea_inizializza(5, 3);
	int y = p[0];
	y = p[1];
	y = p[2];
	y = p[3];
	y = p[4];
	free(p);
	return 0;
}