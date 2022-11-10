/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:53:43 by daguiar-          #+#    #+#             */
/*   Updated: 2022/11/10 16:23:32 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	count(long n)
{
	size_t	l;

	l = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		if (n < 0)
		{
			l++;
			n *= -1;
		}
		n /= 10;
		l++;
	}
	return (l);
}

char	*putstr(char *c, long nbr, size_t l)
{
	while (nbr > 0)
	{
		c[l--] = ((nbr % 10) + 48);
		nbr /= 10;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*c;
	size_t	l;

	nbr = n;
	l = count(nbr);
	c = (char *)malloc(l + 1);
	if (!c)
		return (NULL);
	if (nbr == 0)
	{
		c[0] = 48;
		c[1] = '\0';
		return (c);
	}
	if (nbr < 0)
	{
		c[0] = 45;
		nbr *= -1;
	}
	c[l--] = '\0';
	c = putstr(c, nbr, l);
	return (c);
}
