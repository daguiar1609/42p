/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:15:02 by daguiar-          #+#    #+#             */
/*   Updated: 2022/12/07 13:56:05 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nbr, int *len, int b)
{
	char	*base;

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

void	ft_puthexptr(unsigned long int nbr, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_puthexptr(nbr / 16, len);
		ft_puthexptr(nbr % 16, len);
	}
	else
	{
		ft_putchar(base[nbr % 16], len);
	}
}

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
		ft_putint(nbr / 10, len);
	}
	else if (nbr >= 10)
	{
		ft_putint(nbr / 10, len);
		ft_putint(nbr % 10, len);
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

void	ft_putptr(unsigned long *ptr, int *len)
{
	unsigned long int	add;

	add = (unsigned long int)ptr;
	if (add == 0)
	{
		ft_putstr("(nil)", len);
		return ;
	}
	ft_putstr("0x", len);
	ft_puthexptr(add, len);
}
