extern int ismultiple(int x, int y);

extern double square_dist(double x1, double y1, double x2, double y2);

extern char max_pot10(unsigned int val);

extern unsigned int fattoriale(unsigned char val);

extern int divisione(double a, double b, double *q);

int main(void)
{
	int x, y, z;
	x = 7;
	y = -3;
	z = ismultiple(x, y);

	double x1, y1, x2, y2;
	x1 = 1;
	x2 = 2;
	y1 = 1;
	y2 = 2;

	double distanza;
	distanza = square_dist(x1, y1, x2, y2);

	unsigned int val = 123;
	char res = max_pot10(val);

	unsigned char val1;
	val1 = 0;
	unsigned int fat = fattoriale(val1);

	int successo;
	double a, b, q, *quoziente;
	a = 11;
	b = 5;
	quoziente = &q;
	successo = divisione(a, b, quoziente);

	return 0;
}