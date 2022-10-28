/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:25:51 by daguiar-          #+#    #+#             */
/*   Updated: 2022/10/28 17:30:53 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, size_t n);

int		ft_tolower(int c);

int		ft_toupper(int c);

char	*ft_strrchr(const char *s, int c);

char	*ft_strchr(const char *s, int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int		ft_atoi(const char *nptr);

char	*ft_strnstr(const char *big, const char *little, size_t len);

void	*ft_calloc(size_t nmemb, size_t size);

void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif