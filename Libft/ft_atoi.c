/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:40:20 by daguiar-          #+#    #+#             */
/*   Updated: 2022/10/25 18:49:46 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int i;
	int r;
	int s;

	i = 0;
	r = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
		s = -1;
		i++;
	while(nptr[i] >= 48 && nptr[i] <= 57)
	{
		r = (r * 10) + (nptr[i] - 48);
		i++;
	}
	return (r * s);
}