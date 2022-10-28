/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:08:07 by daguiar-          #+#    #+#             */
/*   Updated: 2022/10/28 18:24:30 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	j = dlen;
	i = 0;
	if (dlen < size - 1 && size > 0)
	{
		while (src[i] && dlen + i < size - 1)
		{	
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = 0;
	}
	if (dlen >= size)
		dlen = size;
	return (dlen + slen);
}
