/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:43:17 by jcampane          #+#    #+#             */
/*   Updated: 2021/04/16 14:38:02 by jcampane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	longitud(char *cad);
int	bucle(char *str, char *to_find, int a, int b);

char	*ft_strstr(char *str, char *to_find)
{
	int			a;
	int			b;
	int			c;
	static int	d;

	c = 0;
	a = longitud(str);
	b = longitud(to_find);
	if (b == 0)
		return (str);
	else if (b > a)
		return (NULL);
	else
	{
		d = bucle(str, to_find, a, b);
		return (&str[d]);
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

int	bucle(char *str, char *to_find, int a, int b)
{
	static int	y;
	int			c;
	int			z;

	z = 0;
	c = 0;
	while (c <= a)
	{
		while (str[c] == to_find[c])
		{
			if (z == b)
			{
				y = c - b;
			}
			c++;
			z++;
		}
		c++;
	}
	return (y);
}
