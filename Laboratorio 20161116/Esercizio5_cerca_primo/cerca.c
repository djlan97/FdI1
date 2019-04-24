#include "cerca.h"

int cerca_primo(const char *s, char c)
{
	int ris = -1;
	for (int i = 0; s[i] != 0; ++i)
	{
		if (s[i] == c)
		{
			ris = i;
			break;
		}
	}
	return ris;
}
