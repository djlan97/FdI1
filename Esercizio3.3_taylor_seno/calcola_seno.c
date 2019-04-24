double pot(double b, int esp){
	double pot = 1;

	for (int i = 0; i < esp; ++i)
		pot *= b;

	return pot;
}

double fatt(int n){
	double f = 1;
	for (int i = 1; i <= n; ++i)
		f *= i;
	return f;
}

double calcola_seno(double x){
	double sen = 0;
	double tmp = 1;
	for (int n = 0; sen != tmp; ++n){
		tmp = sen;
		sen += (pot(-1, n) / fatt(2 * n + 1))*pot(x, 2 * n + 1);
	}


	return sen;
}

double calcola_seno2(double x){
	unsigned int n = 0;

	double res = 0, old,num=1,fat=1,pot=x;
	do{
		old = res;
		res += num / fat*pot;

		++n;
		num *= -1;
		fat *= 2 * n*(2 * n + 1);
		pot *= x*x;
	} while (res != old);

	return res;
}