/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:06:15 by daguiar-          #+#    #+#             */
/*   Updated: 2022/12/07 14:20:17 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

void	ft_putchar(int c, int *len);
void	ft_putstr(char *str, int *len);
void	ft_putint(int nbr, int *len);
int		ft_printf(const char *str, ...);
void	ft_puthex(unsigned int nbr, int *len, int b);
void	ft_putunsint(unsigned int nbr, int *len);
void	ft_putptr(unsigned long *ptr, int *len);
void	ft_puthexptr(unsigned long int nbr, int *len);

#endif