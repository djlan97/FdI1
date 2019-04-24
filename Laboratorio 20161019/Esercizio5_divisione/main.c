#include "divisione.h"

int main(void)
{
	int successo;
	double a, b, q, *quoziente;

	a = 11;
	b = 5;
	quoziente = &q;

	successo = divisione(a, b, quoziente);

	return 0;
}