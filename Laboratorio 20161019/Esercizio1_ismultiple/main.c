//int ismultiple(int x, int y){
//	if (x%y == 0)
//		return 1;
//	else
//		return 0;
//}
//int main(void) {
//	int x, y, z;
//	x = 8;
//	y = 4;
//	z = ismultiple(x, y);
//	return 0;
//}

int main() {
	int primo = 1;
	int i = 2, j, x = 5;

	while ((i < x) && primo) {
		j = x%i;
	
		if (j == 0)
			primo = 0;
		else i++;

	}
}