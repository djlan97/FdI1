#include "razionali.h"

int main(void){

	struct fraz f1 = { 3, 8 };
	struct fraz f2 = { 2, 5 };
	struct fraz f3;

	fr_somma(&f3, &f1, &f2);



	return 0;
}