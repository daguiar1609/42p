/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:06:15 by daguiar-          #+#    #+#             */
/*   Updated: 2022/12/07 11:37:16 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

void	ft_putchar(int c, int *len);
void	ft_putstr(char *str, int *len);
void	ft_putnbr(int nbr, int *len);
int		ft_printf(const char *str, ...);
void	ft_puthex(unsigned int nbr, int *len, int b);
void	ft_putunsint(unsigned int nbr, int *len);

#endif