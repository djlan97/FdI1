unsigned int somma_cifre(unsigned int x){
	unsigned int s = 0, d;
	while (x != 0){
		d = x % 10;
		s = s + d;
		x = x / 10;
	}
	return s;
}

int main(void){
	unsigned int num, somma_c;
	num = 123;
	somma_c = somma_cifre(num);
	return 0;
}