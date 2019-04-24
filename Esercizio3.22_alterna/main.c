#define _CRT_SECURE_NO_WARNINGS
#include"alterna.h"
#include <stdio.h>


int main(void){

	char *s = alterna("1234568", "prova");

	


	fprintf(stdout, "%s", s);


	return 0;
}
