#if !defined SAMPLE_H
#define SAMPLE_H

#include <stdlib.h>
#include <stdio.h>


struct sample{
	int idSample;
	char nomeCategoria[20];
	double accuracy;
};


extern int sample_scrivi(FILE *f, const struct sample *s);
extern int sample_leggi(FILE *f, struct sample *s);
#endif