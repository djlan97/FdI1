double sqrt(double a){
	double t, x = a;

	if (x <= 0.)
		return 0.;
	do {
		t = x;
		x = 0.5* (t + a / t);
	} while (x != t);

	return x;
}

int soluzioni(double a, double b, double c, double *x1, double *x2)
{
	double d;
	d = b*b - 4 * a*c;
	if (d < 0)
	{
		return 0;
	}
	else
	{

		*x1 = (-b + sqrt(d)) / 2 * a;
		*x2 = (-b - sqrt(d)) / 2 * a;


		if (d == 0)
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
}

int main(void)
{
	double s1 = 0, s2 = 0, a = -1, b = 3, c = 4;
	soluzioni(a, b, c, &s1, &s2);
	return 0;
}