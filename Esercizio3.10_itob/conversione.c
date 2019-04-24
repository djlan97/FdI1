#include <stdlib.h>


void itob(unsigned int x, char *sz, size_t n){

	for (size_t i = 0; i < n; ++i){
		sz[n - i-1] = '0' + x % 2;
		x /= 2;
	}
	sz[n] = 0;

	return;
}