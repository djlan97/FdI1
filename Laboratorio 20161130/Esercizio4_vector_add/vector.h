#include <stdlib.h>

#if !defined VECTOR_H
#define VECTOR_H

struct vector{
	size_t size;
	double *data;
};

extern int vector_add_to(struct vector *dst, struct vector *src);
extern struct vector *vector_add(const struct vector *src1, const struct vector *src2);

#endif /*VECTOR_H*/