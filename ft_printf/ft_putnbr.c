/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:15:02 by daguiar-          #+#    #+#             */
/*   Updated: 2022/11/29 16:56:52 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr(int nbr)
{
	if (nbr == INT_MIN)
	{
		ft_putstr("-2147483648");
	}
	else if (nbr < 0 && nbr >= INT_MIN)
	{
		nbr *= -1;
		ft_putchar("-");
		ft_putnbr(nbr / 10);
	}
	else if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else 
	{
		ft_putchar(nbr + 48);
	}
}
