unsigned int fattoriale(unsigned char val)
{
	unsigned int res = 1;

	if (val == 0)
		return 0;
	res = 1;
	for (unsigned char i = 0; i < val; i++)
		res *= (val - i);

	return res;
}

int main(void)
{
	unsigned char val;
	val = 3;
	unsigned int fat = fattoriale(val);

	return 0;
}