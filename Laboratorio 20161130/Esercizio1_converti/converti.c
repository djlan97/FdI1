#include <stdlib.h>

char *converti(unsigned int n)
{
	size_t c;
	unsigned int num = n;
	if (n == 0)
	{
		c = 1;
	}
	else{
		for (c = 0; num != 0; ++c)
		{
			num = num / 10;
		}
	}
	int *tmp = malloc(c*sizeof(int));

	if (n == 0)
	{
		tmp[c] = 0;
	}
	else{
		for (c = 0; n != 0; ++c)
		{
			tmp[c] = n % 10;
			n = n / 10;
		}
	}
	char *x = malloc((c+1)*sizeof(char));
	x[c] = 0;	
	for (size_t j = 0; c > 0; ++j, --c)
	{
		x[c-1] = (tmp[j] % 10)+'0';
	}

	free(tmp);	
	return x;
}