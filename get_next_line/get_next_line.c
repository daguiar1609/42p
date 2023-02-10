/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:52:48 by daguiar-          #+#    #+#             */
/*   Updated: 2023/02/10 16:51:36 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*save;
	char		buff[BUFFER_SIZE + 1];

	if (read(fd, 0, 0) < 0)
	{
		return (NULL);
	}

	while (read(fd, buff, BUFFER_SIZE))
	{
		save = ft_strjoin(save, buff);
	}

	free (buff);
	return (save);
}
