/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:02:50 by daguiar-          #+#    #+#             */
/*   Updated: 2022/11/18 02:52:56 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	tampalavra(const char *s, int i, char c)
{
	int	t;

	t = 0;
	while (s[i] != c && s[i])
	{
		t++;
		i++;
	}
	return (t);
}

static int	contapal(const char *s, char c)
{
	int	i;
	int	is_word;

	i = 0;
	is_word = 0;
	while (*s)
	{
		if (*s != c && is_word == 0)
		{
			is_word = 1;
			i++;
		}
		else if (*s == c)
			is_word = 0;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		tampal;
	int		numpal;
	char	**dst;

	i = 0;
	j = -1;
	numpal = contapal(s, c);
	dst = malloc((numpal + 1) * sizeof(char *));
	if (!dst)
		return (NULL);
	while (++j < numpal)
	{
		while (s[i] == c)
			i++;
		tampal = tampalavra(s, i, c);
		dst[j] = ft_substr(s, i, tampal);
		i += tampal;
	}
	dst[j] = NULL;
	return (dst);
}
