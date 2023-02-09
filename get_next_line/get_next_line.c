/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:13:13 by daguiar-          #+#    #+#             */
/*   Updated: 2023/01/30 16:13:13 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char	stash[BUFFER_SIZE];
	char	*line;
	int	i;

	i = 0;
	if (BUFFER_SIZE < 0 || read(fd, 0, 0) < 0)
	{
		while (stash[i])
			stash[i++] = 0;
		return (NULL);
	}
	line = NULL;
	while (stash[0] || read(fd, stash, BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, stash);
	}
	return (line);
}