/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 09:05:04 by jcampane          #+#    #+#             */
/*   Updated: 2021/04/16 13:34:32 by jcampane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	bucle(int res, char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	static int	z;
	int			res;

	res = 0;
	z = bucle(res, s1, s2);
	return (z);
}

int	bucle(int res, char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] == s2[a])
			a++;
		else
		{
			res = s1[a] - s2[a];
			break ;
		}
	}
	if (s1[a] == '\0' && s2[a] != '\0')
		res = s1[a] - s2[a];
	else if (s1[a] != '\0' && s2[a] == '\0')
		res = s1[a] - s2[a];
	return (res);
}
