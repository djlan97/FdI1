#include "vector.h"
#include "scrittura.h"
int vector_add_to(struct vector *dst, struct vector *src)
{
	if (dst->size == src->size)
	{
		for (size_t i = 0; i < dst->size; ++i)
			dst->data[i] += src->data[i];
		return 1;
	}

	return 0;
}

struct vector *vector_add(const struct vector *src1, const struct vector *src2)
{
	if (src1->size == src2->size)
	{
		struct vector *dst = malloc(sizeof(struct vector));
		dst->size = src1->size;
		dst->data = malloc(dst->size*sizeof(double));
		for (size_t i = 0; i < dst->size; ++i)
			dst->data[i] = src1->data[i] + src2->data[i];
		return dst;
	}
	return NULL;
}