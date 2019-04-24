#include "vector.h"

void vector_create(struct vector *v, size_t length){
	v->size = length;
	
	v->data = malloc(length*sizeof(double));
	return;
}

void vector_destroy(struct vector *v){
	free(v->data);
	v->size = 0;
	v->data = NULL;
	return;
}

struct vector *new_vector(unsigned int length){
	struct vector *pv = malloc(sizeof(struct vector));
	pv->size = length;
	pv->data = malloc(length*sizeof(double));
	return pv;

}
void delete_vector(struct vector *v){
	free(v->data);
	free(v);
	return;
}

int vector_set(struct vector *v, size_t pos, double value){
	if (pos < v->size)
	{
		v->data[pos] = value;
		return 1;
	}
	return 0;
}

int vector_get(const struct vector *v, size_t pos, double *pvalue){
	if (pos < v->size){
		*pvalue = v->data[pos];
		return 1;
	}
	
	return 0;
}