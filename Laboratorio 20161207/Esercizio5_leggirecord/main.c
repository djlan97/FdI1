#include "lettura.h"

int main(void){
	
	size_t n;

	struct record *ris=leggirecord("dati1.txt",&n);
	
	
	
	double y = ris[0].val;
	y = ris[1].val;
	y = ris[2].val;





	free(ris);
	return 0;
}