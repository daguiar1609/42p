/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:48:54 by daguiar-          #+#    #+#             */
/*   Updated: 2023/04/15 19:28:26 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include "get_next_line/get_next_line.h"

int	char_check(char *mapline)
{
	int	i;

	i = 0;
	while (mapline[i] != '\0')
	{
		ft_printf("%c\n", mapline[i]);
		if (mapline[i] == '0')
			ft_printf("Veri good empti haha\n");
		else if (mapline[i] == '1')
			ft_printf("Fook de wall\n");
		else if (mapline[i] == 'P')
			ft_printf("Plaier gona get fooked\n");
		else if (mapline[i] == 'C')
			ft_printf("Colect dat mooni\n");
		else if (mapline[i] == 'E')
			ft_printf("Sceri inimi o no\n");
		i++;
	}
	return (i);
}

int	main(void)
{
	char	*mapline;
	int		fd;
	int		mapend;
	int		i;
	int		wasread;

	mapend = 0;
	i = 0;
	wasread = 0;
	fd = open("map.ber", O_RDONLY);
	while (!mapend)
	{
		if (wasread == 1 && mapline[i] == '\0')
		{
			mapend = 0;
			break ;
		}
		else
			mapline = get_next_line(fd);
		i = char_check(mapline);
		wasread = 1;
		ft_printf("Me oot\n");
	}
	free(mapline);
	close(fd);
}
