double square_dist(double x1, double y1, double x2, double y2){
	double d;
	d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
	return d;
}

int main(void) {
	double a1, a2, b1, b2, d;
	a1 = 0.;
	a2 = 4.;
	b1 = 0.;
	b2 = 7.;
	d = square_dist(a1, a2, b1, b2);
	return 0.;
}