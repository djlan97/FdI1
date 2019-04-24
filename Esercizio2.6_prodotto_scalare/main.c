#include "vettori.h"

int main(void)
{
	double v1[] = { 2, 3, 0, 5 };
	double v2[] = { 0, 3, 2, 1 };
	double ris = prodotto_scalare(v1, v2, sizeof v1/sizeof v1[0]);

	return 0;
}