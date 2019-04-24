#include <stdlib.h>

void potenza(double *ind_base, int esp)
{
	double *num = ind_base;
	double base = *num;
	double tmp = 1;
	for (size_t i = 0; i < esp; ++i)
	{
		tmp *= base;
	}
	*num = tmp;

	return;
}

int main(void)
{
	double a[] = { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };
	size_t i, n = sizeof a / sizeof a[0];

	for (i = 0; i < n; ++i)
	{

		potenza(a + i, i);

	}
	return 0;
}