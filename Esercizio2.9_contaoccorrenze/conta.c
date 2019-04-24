#include <stdlib.h>
#include <string.h>

size_t contaoccorrenze(const char *testo, const char *stringa){



	if (testo == NULL || stringa == NULL)
		return 0;

	if (testo[0] == 0 || stringa[0] == 0){
		return 0;
	}
	size_t conta = 0;	
	
	while (1){

		testo = strstr(testo, stringa);

		if (testo == NULL)
			break;

		++testo;/*NON PUNTA PIU' A "CERCARE" MA A "ERCARE" E QUINDI TROVA QUELLO DOPO!!*/
		++conta;
		
	}
	return conta;
}