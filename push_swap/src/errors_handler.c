/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:04:08 by daguiar-          #+#    #+#             */
/*   Updated: 2023/05/26 15:57:09 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	duplicated_numbers(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 1;
		while (j < ac)
		{
			if (i + j >= ac)
				break ;
			if (ft_atoi(av[i]) == ft_atoi(av[i + j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	valid_numbers(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{	
			if ((av[i][j] < '0' || av[i][j] > '9') && av[i][j] != '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	minus_check(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	while (++i < ac)
	{
		j = -1;
		while (av[i][++j] != '\0')
		{
			if (av[i][j] == '-' && j != 0)
				return (0);
			if (av[i][j] == '-' && av[i][j + 1] == 0)
				return (0);
		}
	}
	return (1);
}

int	int_limits(int ac, char **av)
{
	int	i;

	i = 0;
	while (++i < ac)
		if (ft_atoi(av[i]) < -2147483647 || ft_atoi(av[i]) > 2147483647)
			return (0);
	return (1);
}

void	errors_handler(int ac, char **av)
{
	if (!duplicated_numbers(ac, av))
		exit(write(1, "Duplicated numbers not allowed!", 31));
	if (!valid_numbers(ac, av))
		exit(write(1, "Something other than numbers or - inserted!", 43));
	if (!minus_check(ac, av))
		exit(write(1, "Too many/only/wrongly placed minus inserted!", 44));
	if (!int_limits(ac, av))
		exit(write(1, "Number/s bigger or smaller than int limts!", 42));
}
