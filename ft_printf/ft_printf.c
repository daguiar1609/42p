/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:05:56 by daguiar-          #+#    #+#             */
/*   Updated: 2022/11/29 17:17:41 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	check_params(char c, va_list arg)
{
	if (c == 'c')
		ft_putchar(va_arg(arg, int));
	else if (c == 's')
		ft_putstr(va_arg(arg, char *));
	/*else if (str[i] == 'p')
		ft_putptr(va_arg(arg, void *));*/
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(arg, int));
	else if (c == '%')
		ft_putchar('%');
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;

	i = 0;
	va_start(arg, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			check_params(str[i], arg);
			i++;
		}
		ft_putchar(str[i]);
		i++;
	}
}

int	main()
{
	ft_printf("%d\n", 54654);
	printf("%d", INT_MIN);
}