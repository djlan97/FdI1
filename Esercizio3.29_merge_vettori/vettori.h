#if !defined VETTORI_H
#define VETTORI_H

#include <stdlib.h>
#include <string.h>


struct vettore{
	size_t n;
	double *data;
};


extern struct vettore *mergeVettoti(const struct vettore *a, const struct vettore *b);



#endif/*VETTORI_H*/