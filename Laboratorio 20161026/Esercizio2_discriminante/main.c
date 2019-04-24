double discriminante(double a, double b, double c)
{
	double d;
	d = b*b - 4 * a*c;
	return d;
}

int main(void)
{
	double dis, a = -1, b = 3, c = 4;
	dis = discriminante(a, b, c);
	return 0;
}