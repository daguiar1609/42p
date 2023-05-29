/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:25:08 by daguiar-          #+#    #+#             */
/*   Updated: 2022/12/07 14:13:14 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int c, int *len)
{
	(*len) += write(1, &c, 1);
}

void	ft_putstr(char *str, int *len)
{
	int	i;

	i = 0;
	if (!str)
		*len += write(1, "(null)", 6);
	else
		while (str[i])
			ft_putchar(str[i++], len);
}
