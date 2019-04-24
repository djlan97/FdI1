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

unsigned int prossimo_numero_primo(unsigned int x)
{
	//4294967295 è il massimo numero che un numero a 32 bit senza segno (unsigned int) può rappresentare, ovviamente l'ho cercato su google.
	for (unsigned int i = (x + 1); i < 4294967295; i++)
	{
		if (primo(i) == 1)
		{
			return i;
		}
	}

	return 0;
}

int main(void)
{
	unsigned int res, x;

	x = 10;

	res = prossimo_numero_primo(x);

	return 0;
}