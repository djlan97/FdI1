#include <stdlib.h>
#include <stdio.h>

void array_remove(double *arr, size_t *pn, size_t pos)
{
	if (pos < *pn)
	{
		*pn = *pn - 1;
		for (; pos < *pn; ++pos)
			arr[pos] = arr[pos + 1];

	}
	return;
}


//funzione per mostrare array

static void array_print(double *arr, size_t n)
{
	for (size_t i = 0; i < n; ++i)
		printf("%f ", arr[i]);
	printf("\n");
}


int main(void)
{
	double a[] = { 22.4, -4.67, 140, 1.99, 87.7 };
	size_t n = sizeof a / sizeof *a;
	array_print(a, n);
	array_remove(a, &n, 2);
	array_print(a, n);

	return 0;
}