#if !defined LETTURA_H
#define LETTURA_H
#include <stdlib.h>
#include <stdio.h>
#define STR_MAX_LEN 25

struct record{
	char str[STR_MAX_LEN + 1];
	double val;
};

extern struct record *leggirecord(const char *filename, size_t *size);

#endif /*LETTURA_H*/