/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:52:14 by daguiar-          #+#    #+#             */
/*   Updated: 2022/11/28 15:05:39 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	putchar(char c)
{
	return (write(1, &c, 1));
}

int	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
		write(1, str[i++], 1);
	return (i);
}
