#include <stdlib.h>

size_t lungh(const char *str)
{
	size_t i = 0;
	unsigned char tmp = *str;
	while (tmp != 0)
	{
		tmp = *(str + i);
		++i;
	}
	return (i - 1);
}

int main(void)
{
	char s[] = "Ecco la stringa di prova";
	size_t len;
	len = lungh(s);
	return 0;
}