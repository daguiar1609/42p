/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:00:26 by daguiar-          #+#    #+#             */
/*   Updated: 2022/10/28 15:06:13 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!big || !little)
		return (NULL);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j]
			&& i + j < len && big[i + j] && little[j])
				j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
