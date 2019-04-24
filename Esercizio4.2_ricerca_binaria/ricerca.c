#include <stdlib.h>

int ricerca_binaria(const int *v, size_t n, int x){
	int primo = 0;
	int ultimo = n - 1;
	
	int i = -1;

	while (primo <= ultimo){
		size_t m = (primo + ultimo) / 2;
		if (v[m] == x){
			i = m;
			break;
		}
			

		else{
			if (v[m]>x)
				ultimo = m - 1;
			else
				primo = m + 1;
		}
	}

	
	return i;
}