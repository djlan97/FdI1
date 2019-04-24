int cerca_ultimo(const char *s, char c)
{
	int indice = -1;

	for (int i = 0; s[i] != 0; ++i)
	{
		if (s[i] == c)
		{
			indice = i;
		}
	}

	return indice;
}