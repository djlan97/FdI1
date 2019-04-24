#include <stdlib.h>

char *concatena(const char *prima, const char *seconda)
{

	int conta_prima = conta_array(prima), conta_seconda=conta_array(seconda);



	char *c=calloc((conta_prima+conta_seconda+1),sizeof(char));
	
	int i = 0;

	for (; i<conta_prima; ++i)
	{
		
		c[i] = prima[i];
	}

	for (int j=0; j < conta_seconda; ++i,++j)
	{

		c[i] = seconda[j];
	}

	return c;
}

int conta_array(char *p)
{

	int conta = 0;
	if (p != NULL){
		for (int i = 0; p[i] != 0; ++i)
			++conta;
	}
	return conta;
}