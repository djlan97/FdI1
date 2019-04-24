#include "punti.h"

int trova_piu_lontani(const struct punto3d *punti, size_t n, size_t *p1, size_t *p2){
	if (n < 2)
		return 0;
	double maxdist = 0, dist = 0, diff=0;	
	
	for (size_t i = 0; i < n; ++i){
		for (size_t j = i + 1; j < n; ++j){
			for (size_t k = 0; k < 3; ++k){
				
				diff=(punti + i)->coord[k]-(&punti[j])->coord[k];

				dist += diff*diff;
			}

			if (dist>maxdist){
				maxdist = dist;
				*p1 = i;
				*p2 = j;
			}

			dist = 0;

		}
	}
	
	return 1;
}