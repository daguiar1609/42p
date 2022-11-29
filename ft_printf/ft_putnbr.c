/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:15:02 by daguiar-          #+#    #+#             */
/*   Updated: 2022/11/29 16:17:19 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr < 10 && nbr >= 0)
	{
		c = nbr + 48;
		write(1, &c, 1);
	}
	else if (nbr >= 10 && nbr <= INT_MAX)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else if (nbr == INT_MIN)
	{
		write(1, "-", 1);
		write(1, "2147483648", 10);
	}
	else if (nbr < 0 && nbr >= INT_MIN)
	{
		nbr *= -1;
		write(1, "-", 1);
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}