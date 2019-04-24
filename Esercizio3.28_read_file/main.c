#include "read_file.h"

int main(void){

	size_t n;
	byte *c = read_file2("prova.txt", &n);

	int y = c[0];
	y = c[1];
	y = c[2];


	return 0;
}