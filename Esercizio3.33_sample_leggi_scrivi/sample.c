#include "sample.h"

int sample_scrivi(FILE *f, const struct sample *s){
	size_t scritti;
	scritti=fwrite(&s->idSample, sizeof(int), 1, f);
	if (scritti != 1)
		return 0;

	scritti = fwrite(s->nomeCategoria, sizeof(char), sizeof(s->nomeCategoria), f);
	if (scritti != sizeof(s->nomeCategoria))
		return 0;

	scritti = fwrite(&s->accuracy, sizeof(double), 1, f);
	if (scritti != 1)
		return 0;


	return 1;
}
int sample_leggi(FILE *f, struct sample *s){

	size_t letti;
	letti = fread(&s->idSample, sizeof(int), 1, f);
	if (letti != 1)
		return 0;

	letti = fwrite(s->nomeCategoria, sizeof(char), sizeof(s->nomeCategoria), f);
	if (letti != sizeof(s->nomeCategoria))
		return 0;

	letti = fwrite(&s->accuracy, sizeof(double), 1, f);
	if (letti != 1)
		return 0;


	return 1;


	return 0;
}