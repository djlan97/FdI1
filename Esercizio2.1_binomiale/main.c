double binomiale(unsigned int n, unsigned int k) {
	double nfatt =1, kfatt=1, nkfatt=1;

	if (n == 0 || k > n){
		return -1;
	}
	for (unsigned int i = 2; i <= n; ++i){
		nfatt *= i;
		if (k == i){
			kfatt = nfatt;
		}
		if (i == (n - k)){
			nkfatt = nfatt;
		}
	}
	
	return  nfatt/ (kfatt*nkfatt);
}

int main(void){
	unsigned int n = 5, k = 2;
	double ris = binomiale(n, k);
	return 0;
}