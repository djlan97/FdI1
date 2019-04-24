#include "lettura.h"

int main(void){
	
	size_t n;
	double *p = leggidouble("dati1.txt",&n);
	
	double y;
	y = p[0];
	y = p[1];
	y = p[2];
	y = p[3];
	y = p[4];
	y = p[5];
	y = p[6];
	y = p[11];
	y = p[12];
	y = p[13];
	return 0;
}