#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	a[] = "asdkaksd";
	char	b[] = "";
	int		res;

	res = ft_strcmp(a, b);
	printf("%d", res);
	return (0);
}
