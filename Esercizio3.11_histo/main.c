#include <stdlib.h>

extern void histogram(const char *values, size_t n);

int main(void){

	char v[] = { 1, 2, 3 };	


	histogram(v, 3);

	return 0;
}