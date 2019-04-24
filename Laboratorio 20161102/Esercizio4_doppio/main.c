#include <stdlib.h>
#include <stdint.h>

uint32_t *crea_int_vec(size_t n)
{
	uint32_t *v;
	size_t i;
	v = malloc(n*sizeof(uint32_t));
	for (i = 0; i < n; ++i)
	{
		v[i] = i; /* ==>*(v+i) */
	}
	return v;
}

void doppio(uint32_t *vett, size_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		vett[i] *= 2;
	}
}

int main(void)
{
	size_t n = 20;
	uint32_t *vettore = crea_int_vec(n);
	doppio(vettore, n);
	free(vettore);
	return 0;
}