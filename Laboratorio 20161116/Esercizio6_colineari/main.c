#include "geometria.h"

int main(void)
{
	struct punto p1 = { 6., 2. };
	struct punto p2 = { 7., 3. };
	struct punto p3 = { 4., 5. };
	int ris = colineari(p1, p2, p3);
	return 0;
}