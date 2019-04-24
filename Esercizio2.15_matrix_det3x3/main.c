#include "matrici.h"
int main(void){

	double mat[] = {
		1,2,3,
		1,1,1,
		1,2,1
	};
	double d = det3x3(mat);
	return 0;
}