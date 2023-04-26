/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:00:26 by daguiar-          #+#    #+#             */
/*   Updated: 2022/11/02 15:50:59 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*nstr;
	int		i;

	nstr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!nstr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		nstr[i] = s[i];
		i++;
	}
	nstr[i] = 0;
	return (nstr);
}
