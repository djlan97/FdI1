double pot(double b, int e){

	double ris=1;

	for (int i = 0; i < e; ++i)
		ris *= b;


	return ris;
}


double fatt(int n){
	double f=1;

	for (int i = 1; i <= n; ++i)
		f *= i;


	return f;
}

double coseno(double x){
	if (x != 0){
		double cos = 0, tmp = 1;
		unsigned int n = 0;
		while (cos != tmp){
			tmp = cos;
			cos += (pot(-1, n) / fatt(2 * n))*pot(x, 2 * n);


			++n;
		}


		return cos;
	}
	return 1.;
}

double coseno2(double x){
	unsigned int n = 0;
	double ris = 1, old;
	double num = 1, den = 1, pot = 1;
	do{
		old = ris;
		n++;
		num *= -1;
		den *= (2 * n)*(2 * n - 1);
		pot *= x*x;
		ris += num / den*pot;
	} while (old != ris);
	return ris;

}