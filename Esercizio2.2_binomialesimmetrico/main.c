double fatt(unsigned int n)
{
	double f = 1;
	for (unsigned int i = 2; i <= n; ++i)
	{
		f *= i;
	}
	return f;
}

double binomialesimmetrico(unsigned int n, unsigned int h, unsigned int k)
{

	return fatt(n) / (fatt(h)*fatt(k));
}

int main(void)
{
	return 0;
}