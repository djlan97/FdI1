#include "razionali.h"


void fr_somma(struct fraz *ris, const struct fraz *a, const struct fraz *b){

	int num = (int)a->num*b->den + (int)b->num*a->den;
	int den = (int)a->den*b->den;

	int m = mcd(abs(num),den);

	ris->num = num / m;
	ris->den = den / m;

	return;
}


int mcd(int m, int n){

	while (n != 0 && m != 0){
		if (m > n)
			m %= n;
		else
			n %= m;
	}
	
	if (n == 0)
		return m;
	else
		return n;
}