//Per capire sta robaccia: https://it.wikipedia.org/wiki/Crivello_di_Eratostene
int primo(unsigned int val)
{
	if ((val % 2) == 0)
	{
		return 0;
	}
	unsigned int max = ((val - 1) / 2);
	for (unsigned int i = 2; i < max; i++)
	{
		if ((val % ((2 * i) + 1)) == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main(void)
{
	unsigned int n;
	int res;

	n = 11;

	res = primo(n);

	return 0;
}