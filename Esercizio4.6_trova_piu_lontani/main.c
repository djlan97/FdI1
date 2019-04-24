#include "punti.h"

int main(void){
	
	size_t p1, p2;

	struct punto3d p[3] = { { 4, 4, 4 }, { 5, 5, 5 }, { 6, 6, 6 } };

	int res = trova_piu_lontani(p,3,&p1,&p2);

	return 0;
}