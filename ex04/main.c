#include <stdio.h>
char *ft_strstr(char *str, char *to_find);
int main(void)
{
	char a[]="programar es muy interesante en 42 madrid";
	char b[]="interesante";
	char *p;

	p = ft_strstr(a, b);
	printf("%s", p);
	return (0);
}
