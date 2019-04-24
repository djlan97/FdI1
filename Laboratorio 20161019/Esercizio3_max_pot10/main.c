char max_pot10(unsigned int val){
	unsigned int pot = 1;
	char esp = -1;
	if (val == 0){
		return esp;
	}
	else{
		while (pot <= val){
			pot *= 10;
			esp = esp + 1;
		}
		return esp;
	}
}

int main(void){
	unsigned int v;
	int esp;
	v = 123456;
	esp = max_pot10(v);
	return 0;
}