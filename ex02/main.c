#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char a[100] = "cadena";
	char b[] = "cadena2";
	char	*p;

	p = ft_strcat(a, b);
	printf("%s", p);
	printf("%s", a);
	return (0);
}
