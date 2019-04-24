#include "matematica.h"
#include <stdlib.h>

double fattoriale(int n)
{
	double fatt = 1;
	for (int i = 2; i <= n; ++i){
		fatt *= i;
	}
	return fatt;
}

double potenza(double base, int esp)
{
	double tmp = 1;
	for (size_t i = 0; i < esp; ++i)
	{
		tmp *= base;
	}

	return tmp;
}

double exp(double x){
	if (x == 0){
		return 1.;
	}
	double s = 0, t=1;
	for (int n = 0; t!=s; ++n)
	{
		t = s;
		s += potenza(x, n) / fattoriale(n);
	}
	return s;
}