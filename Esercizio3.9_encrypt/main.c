void encrypt(char *s, unsigned int n);

int main(void){
	char prova[] = "prova";
	encrypt(prova, sizeof(prova) / sizeof(prova[0]));
	int y = prova[0];
	y = prova[1];
	y = prova[2];
	encrypt(prova, sizeof(prova) / sizeof(prova[0]));
	y = prova[0];
	y = prova[1];
	y = prova[2];
	
	return 0;
}