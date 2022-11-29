/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:05:56 by daguiar-          #+#    #+#             */
/*   Updated: 2022/11/29 16:25:06 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
			if (str[i] == 'c')
				ft_putchar(va_arg(arg, int));
			else if (str[i] == 's')
				ft_putstr(va_arg(arg, char *));
			/*else if (str[i] == 'p')
				ft_putptr(va_arg(arg, void *));*/
			else if (str[i] == 'd')
				ft_putnbr(va_arg(arg, int));
			else if (str[i] == '%')
				ft_putchar('%');
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