/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:04:57 by daguiar-          #+#    #+#             */
/*   Updated: 2022/11/02 17:30:05 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	sizes;

	sizes = ft_strlen(s);
	if (start > sizes)
	{
		str = (char *)malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	if (len >= sizes)
		len = sizes - start;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	return (ft_memcpy(str, s + start, len));
}
