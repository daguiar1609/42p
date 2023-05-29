/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:40:20 by daguiar-          #+#    #+#             */
/*   Updated: 2023/05/18 08:50:12 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

long	ft_atoi(const char *nptr)
{
	int					i;
	unsigned long int	r;
	int					s;

	i = 0;
	r = 0;
	s = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= 48 && nptr[i] <= 57 && nptr[i] != '\0')
	{
		r *= 10;
		r += nptr[i] - 48;
		i++;
	}
	return (r * s);
}
