/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:43:17 by jcampane          #+#    #+#             */
/*   Updated: 2021/04/19 11:42:09 by jcampane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		longitud(char *cad);
char	*bucle(char *str, char *to_find);
int		cadena(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	int		b;

	b = longitud(to_find);
	if (b == 0)
		return (str);
	else
	{
		a = bucle(str, to_find);
		return (a);
	}
}

int	longitud(char *cad)
{
	static int	i;

	i = 0;
	while (cad[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*bucle(char *str, char *to_find)
{
	while (*str)
	{
		if (*str == *to_find && cadena(str, to_find) == 1)
		{
			printf("done");
			return (&*str);
		}
		str++;
	}
	return (NULL);
}

int	cadena(char *str, char *to_find)
{
	while (*str && *to_find)
	{
		if (*str != *to_find)
			return (0);
		(*str)++;
		(*to_find)++;
	}
	return (1);
}
