/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:15:02 by daguiar-          #+#    #+#             */
/*   Updated: 2022/11/28 18:25:50 by daguiar-         ###   ########.fr       */
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
	else if (nbr >= 10)
	{
		while (nbr > 0)
		{
			ft_putnbr(nbr % 10);
			nbr /= 10;
		}
	}
}