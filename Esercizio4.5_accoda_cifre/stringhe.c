#define _CRT_SECURE_NO_WARNINGS
#include "stringhe.h"

void accodaCifra(char **vs, unsigned char n){
	char *numeri[] = {
		" _     _  _     _  _  _  _  _ ",
		"| |  | _| _||_||_ |_   ||_||_|",
		"|_|  ||_  _|  | _||_|  ||_| _|"
	};
	for (size_t i = 0; i < n;++i)
		strncat(vs[i], numeri[i] + n * 3, 3);
}











void accodaCifra2(char **vs, unsigned char n){
	char *cifre[10][3] = { {
		" _ ",
		"| |",
		"|_|"
	}, {
		"   ",
		"  |",
		"  |"
	}, {
		" _ ",
		" _|",
		"|_"
	}, {
		" _ ",
		" _|",
		" _|"
	}, {
		"   ",
		"|_|",
		"  |"
	}, {
		" _ ",
		"|_ ",
		" _|"
	}, {
		" _ ",
		"|_ ",
		"|_|"
	}, {
		" _ ",
		"  |",
		"  |"
	}, {
		" _ ",
		"|_|",
		"|_|"
	}, {
		" _ ",
		"|_|",
		" _|"} 
	};


	for (size_t i = 0; i < 3; ++i){
		strcat(vs[i], cifre[n][i]);
	}

	
}