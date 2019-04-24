#include "lettura.h"
int main(void)
{
	size_t n;

	int *p = leggiinteri("dati2.bin",&n);
	int y;
	y = p[0];
	y = p[1];
	y = p[2];
	y = p[3];
	y = p[4];
	y = p[5];
	y = p[6];
	y = p[7];
	y = p[8];
	y = p[9];
	y = p[10];
	y = p[11];
	y = p[12];
	return 0;
}