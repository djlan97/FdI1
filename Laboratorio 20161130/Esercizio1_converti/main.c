extern char *converti(unsigned int n);

int main(void){

	unsigned int n = 0;
	char *x=converti(n);
	free(x);
	return 0;
}