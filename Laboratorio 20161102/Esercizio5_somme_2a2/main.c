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

uint32_t *somme_2a2(uint32_t *vett, size_t size)
{
	uint32_t *s;
	size_t j = 0;
	s = malloc((size / 2)*sizeof(uint32_t));
	for (size_t i = 0; i < (size / 2); ++i)
	{
		s[i] = vett[j] + vett[j + 1];
		j += 2;
	}


	return s;
}

int main(void)
{
	uint32_t y;
	size_t n = 8;
	uint32_t *vettore = crea_int_vec(n);
	uint32_t *somme = somme_2a2(vettore, n);

	y = somme[0];
	y = somme[1];
	y = somme[2];
	y = somme[3];
	y = somme[4];
	y = somme[5];
	y = somme[6];
	y = somme[7];
	y = somme[8];
	y = somme[9];
	y = somme[10];
	y = somme[11];


	free(vettore);
	free(somme);
	return 0;
}