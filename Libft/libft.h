/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:25:51 by daguiar-          #+#    #+#             */
/*   Updated: 2022/11/07 16:09:45 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

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

size_t	ft_strlcat(char *dst, char *src, size_t size);

void	*ft_memmove(void *dest, const void *src, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

char	*ft_strdup(const char *s);

char	*ft_strjoin(const char *s1, const char *s2);

char	*ft_substr(const char *s, unsigned int start, size_t len);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

char	*ft_strtrim(char const *s1, char const *set);

#endif