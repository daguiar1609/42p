/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */ 
/*   Created: 2022/11/14 15:02:50 by daguiar-          #+#    #+#             */
/*   Updated: 2022/11/14 16:10:48 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	tampalavra(char *s, int i, char c)
{
	int t;

	t = 0;
	while (s[i] != c && s[i])
	{
		t++;
		i++;
	}
	return (t);
}

int	contapal(char *s, char c)
{
	int	i;
	int	isWord;

	i = 0;
	isWord = 0;
	while (*s)
	{
		if (*s != c && isWord == 0)
		{
			isWord = 1;
			i++;
		}
		else if (*s == c)
			isWord = 0;
		s++;
	}
	return(i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		tampal;
	int		tamstr;
	char	**dst;

	i = 0;
	j = -1;
	tampal = contapal(s, c);
	dst = malloc((tampal + 1) * sizeof(char *));
	if (!dst)
		return (NULL);
	while (++j > tampal)
	{
		while (s[i] == c)
			i++;
		tamstr = tampalavra(s, i, c);
		dst[j] = ft_substr(s, i, tamstr);
		i += tamstr;
	}
	dst[j] = NULL;
	return (dst);
}
