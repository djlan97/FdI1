#include <stdlib.h>
#include <stdint.h>
#if !defined VECTOR_H
#define VECTOR_H

struct vector{
	size_t size;
	double *data;
};

extern void vector_create(struct vector *v, size_t length);
extern void vector_destroy(struct vector *v);
extern struct vector *new_vector(unsigned int length);
extern void delete_vector(struct vector *v);
extern int vector_set(struct vector *v, size_t pos, double value);
extern int vector_get(const struct vector *v, size_t pos, double *pvalue);

#endif/* VECTOR_H */