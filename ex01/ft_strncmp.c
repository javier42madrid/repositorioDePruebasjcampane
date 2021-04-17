/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:12:16 by jcampane          #+#    #+#             */
/*   Updated: 2021/04/17 10:16:32 by jcampane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	programa(unsigned int n, int a, char *s1, char *s2);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	static int		res;
	int				a;

	a = 0;
	res = 0;
	res = programa(n, a, s1, s2);
	return (res);
}

int	programa(unsigned int n, int a, char *s1, char *s2)
{
	static int	res;
	int			b;

	res = 0;
	while ((unsigned int)a <= n && s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] == s2[a])
		{
			a++;
		}
		else
		{
			res = s1[a] - s2[a];
			break ;
		}
	}
	if (s1[a] != '\0' && s2[a] == '\0' && a < n)
		res = s1[a] - s2[a];
	else if (s1[a] == '\0' && s2[a] != '\0' && a < n)
		res = s1[a] - s2[a];
	return (res);
}
