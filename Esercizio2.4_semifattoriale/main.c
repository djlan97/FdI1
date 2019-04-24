double semifattoriale(char n)
{
	if (n < 0)
		return -1.0;
	double sfatt=1;
	if (n == 1 || n == 0)
		return sfatt;
	for(int i=(n%2)+2; i<=n; i+=2)
	{
		sfatt *= i;
	}
	return sfatt;
}

double semifattoriale_libro(char n)
{
	if (n < 0)
		return -1.0;
	if (n<2)
		return 1.0;
	double ret = 1;
	for (; n>1; n -= 2)
		ret *= n;
	return ret;
}

int main(void)
{
	double ris = semifattoriale(0);
	return 0;
}