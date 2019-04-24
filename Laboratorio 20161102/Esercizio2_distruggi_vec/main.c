#include <stdint.h>
#include <stdlib.h>

void distruggi_vec(uint32_t *p)
{
	free(p);

}

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

int main(void)
{
	uint32_t *x, y;
	x = crea_int_vec(5);
	y = x[0]; /* *x */
	y = x[1];/* *(x+1) */
	y = x[2];/* *(x+2) */
	y = x[3];
	y = x[4];

	distruggi_vec(x);
	return 0;
}