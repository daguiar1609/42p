/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:26:08 by daguiar-          #+#    #+#             */
/*   Updated: 2022/12/06 15:56:01 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr(char *str, int *len)
{
	int	i;

	i = 0;
	if (!str)
		ft_putstr("(null)", len);
	while (str[i])
		ft_putchar(str[i++], len);
}