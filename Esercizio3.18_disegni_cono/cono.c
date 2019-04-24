#include <stdlib.h>
#include <stdio.h>

void ripeti(const char c, unsigned int n){
	while (n > 0){
		putchar(c);
		--n;
	}
}

void stampa_cono(unsigned int h){
	if (h == 0)
		return;
	//prima riga
	ripeti(' ', h + 1);
	putchar('_');
	putchar('\n');

	size_t i;

	for  (i = 0; i < h-1; ++i){
		ripeti(' ', h - i);
		putchar('/');
		ripeti(' ', i+(i+1));
		putchar('\\');
		putchar('\n');
	}
	putchar('_');
	putchar('/');
	ripeti(' ', i + (i+1));
	putchar('\\');
	putchar('_');
	putchar('\n');
}