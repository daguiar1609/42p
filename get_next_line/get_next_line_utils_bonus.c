/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:54:09 by daguiar-          #+#    #+#             */
/*   Updated: 2023/02/15 15:31:03 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	return (i);
}

bool	no_overwrite(char *s)
{
	int		i;
	int		j;
	bool	nline;

	i = 0;
	j = 0;
	nline = false;
	while (s[i])
	{
		if (nline)
			s[j++] = s[i];
		if (s[i] == '\n')
			nline = true;
		s[i++] = '\0';
	}
	return (nline);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s;
	int		i;

	s = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	free (s1);
	while (*s2)
	{
		s[i++] = *s2;
		if (*s2++ == '\n')
			break ;
	}
	s[i] = '\0';
	return (s);
}
