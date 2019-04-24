int ismultiple(int x, int y)
{
	int z;

	z = x % y;

	if (z == 0)
	{
		z = 1;
	}
	else if (z == 1)
	{
		z = 0;
	}

	return z;
}

double square_dist(double x1, double y1, double x2, double y2){
	double d;
	d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
	return d;
}

char max_pot10(unsigned int val){
	unsigned int pot = 1;
	char esp = -1;
	if (val == 0){
		return esp;
	}
	else{
		while (pot <= val){
			pot *= 10;
			esp = esp + 1;
		}
		return esp;
	}
}

unsigned int fattoriale(unsigned char val)
{
	unsigned int res;

	if (val == 0)
	{
		return 0;
	}

	res = 1;

	for (unsigned char i = 0; i < val; i++)
	{
		res *= (val - i);
	}

	return res;
}

int divisione(double a, double b, double *q)
{
	if (b == 0)
	{
		return 0;
	}

	*q = a / b;
	return 1;
}