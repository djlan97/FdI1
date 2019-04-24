#if !defined RAZIONALI_H
#define RAZIONALI_H

#include <stdlib.h>
#include <math.h>
struct fraz{
	int num;
	unsigned int den;
};


extern void fr_somma(struct fraz *ris, const struct fraz *a, const struct fraz *b);
extern int mcd(int m, int n);

#endif/*RAZIONALI_H*/