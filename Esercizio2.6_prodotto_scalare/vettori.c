#include "vettori.h"

double prodotto_scalare(const double *x, const double *y, size_t n)
{
	double pc = 0;
	if (!(n == 0 || x == NULL || y == NULL))
	{
		for (size_t i = 0; i < n; ++i)
		pc += x[i] * y[i];
	}
	return pc;
}