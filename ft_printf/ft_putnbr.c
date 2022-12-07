/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:15:02 by daguiar-          #+#    #+#             */
/*   Updated: 2022/12/07 11:35:35 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putint(int nbr, int *len)
{
	if (nbr == INT_MIN)
	{
		ft_putstr("-2147483648", len);
	}
	else if (nbr < 0 && nbr >= INT_MIN)
	{
		nbr *= -1;
		ft_putchar('-', len);
		ft_putnbr(nbr / 10, len);
	}
	else if (nbr >= 10)
	{
		ft_putnbr(nbr / 10, len);
		ft_putnbr(nbr % 10, len);
	}
	else
	{
		ft_putchar(nbr + 48, len);
	}
}

void	ft_putunsint(unsigned int nbr, int *len)
{
	if (nbr >= 10)
	{
		ft_putunsint(nbr / 10, len);
		ft_putunsint(nbr % 10, len);
	}
	else
	{
		ft_putchar(nbr + 48, len);
	}
}
