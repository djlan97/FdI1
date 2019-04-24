double det3x3(double *matr){
	
	double det = (matr[0] * matr[4] * matr[8]) + (matr[1] * matr[5] * matr[6]) + (matr[2] * matr[3] * matr[7]) - (matr[6] * matr[4] * matr[2]) - (matr[7] * matr[5] * matr[0]) - (matr[8] * matr[3] * matr[1]);
	
	return det;
}