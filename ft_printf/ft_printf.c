/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:05:56 by daguiar-          #+#    #+#             */
/*   Updated: 2022/12/06 15:43:53 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	check_params(char c, va_list arg, int *len)
{
	if (c == 'c')
		ft_putchar(va_arg(arg, int), len);
	else if (c == 's')
		ft_putstr(va_arg(arg, char *), len);
	/*else if (str[i] == 'p')
		ft_putptr(va_arg(arg, void *));*/
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(arg, int), len);
	else if (c == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		len;

	len = 0;
	i = 0;
	va_start(arg, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			check_params(str[i], arg, &len);
			i++;
		}
		ft_putchar(str[i], &len);
		i++;
	}
	return (len);
}

int	main()
{
	ft_printf("%d\n", ft_printf("%s\n", "123"));
	printf("%d\n", printf("%d\n", 123));
}