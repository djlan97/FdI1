#include <stdint.h>
#include <stdlib.h>

double media(const double *x, unsigned int n){
	if (n == 0)
	{
		return 0;
	}
	double s = 0;
	for (size_t i = 0; i < n; ++i)
	{
		s += x[i];
	}
	return s / n;
}


int main(void)
{
	double m;
	double *v;
	unsigned int n_el = 6;
	v = malloc(n_el*sizeof(double));
	v[0] = 1;
	v[1] = 11;
	v[2] = 26;
	v[3] = 14;
	v[4] = 28;
	v[5] = 4.5;
	m = media(v, n_el);
	free(v);
	return 0;
}