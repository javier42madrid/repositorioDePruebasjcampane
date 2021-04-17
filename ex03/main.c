#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char a[100] = "cadena";
	char b[] = "plata";
	char *p;
	unsigned int nb;
	
	nb= 3;
	p = ft_strncat(a, b, nb);
	printf("%s", p);
	printf("%s", a);
	return (0);
}
