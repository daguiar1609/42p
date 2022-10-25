/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:49 by daguiar-          #+#    #+#             */
/*   Updated: 2022/10/24 19:02:22 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char	*p;
	int		i;

	i = strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
		{
			*p = c;
			return (p);
		}
		i--;
	}
	return (0);
}
