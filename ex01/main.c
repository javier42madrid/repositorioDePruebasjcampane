#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char			a[] = "cad";
	char			b[] = "caden";
	int				res;
	unsigned int	n;

	n = 4;
	res = ft_strncmp(a, b, n);
	printf("%d", res);
	return (0);
}
