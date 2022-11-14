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

int	spaces(char *s, int i, char c)
{
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32 || s[i] == c)
		i++;
	return (i);
}

int	count(char *s, int i, char c, int j)
{
	while (s[i + j] != c)
		j++;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	**dst;

	i = 0;
	j = 0;
	while (s[i] == '\0')
	{
		l = 0;
		i = spaces(s, i, c);
		j = count(s, i, c, j);
		*dst[i] = malloc(j + 1);
		if (!dst)
			return (NULL);
		k = i - j;
		j = 0;
		while (s[k] != c)
		{
			dst[j][l] = s[k];
			k++;
			l++;
		}
	}
	return (dst);
}
