#include "matematica.h"

double ln(double x)
{
	double ln = 0, tmp = 1;
	for (int i = 0; tmp!=ln;++i)
	{
		tmp = ln;
		

		double pot = 1;
		for (int j = 0; j < (2.0 * i + 1.0); ++j)
		{
			pot *= ((x - 1.0) / (x + 1.0));
		}


		ln += (1.0 / (2.0 * i + 1.0))*pot/* potenza((x - 1.0) / (x + 1.0),(2.0 * i + 1.0)) */;
	}
	return 2*ln;
}

double potenza(double base, int esp)
{
	double tmp = 1;
	for (int i = 0; i < esp; ++i)
	{
		tmp *= base;
	}
	
	return tmp;
}