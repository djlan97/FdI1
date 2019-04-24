#include "vettori.h"

struct vettore *mergeVettoti(const struct vettore *a, const struct vettore *b){

	struct vettore *ris = malloc(sizeof(struct vettore));

	ris->n = a->n + b->n;
	ris->data = malloc(ris->n*sizeof(double));

	memcpy(ris->data,a->data,a->n*sizeof(double));
	memcpy(ris->data + a->n, b->data, b->n*sizeof(double));


	return ris;
}