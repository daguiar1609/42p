/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:14:28 by daguiar-          #+#    #+#             */
/*   Updated: 2022/12/06 17:39:16 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthex(unsigned int nbr, int *len, int b)
{
	int		i;
	char	*base;

	i = 0;
	if (b == 0)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		ft_puthex(nbr / 16, len, b);
		ft_puthex(nbr % 16, len, b);
	}
	else
		ft_putchar(base[nbr % 16], len);
}
