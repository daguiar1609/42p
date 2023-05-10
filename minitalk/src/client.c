/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:13:22 by daguiar-          #+#    #+#             */
/*   Updated: 2023/05/10 11:56:45 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	confirm_msg(int signal)
{
	if (signal == SIGUSR2)
		ft_printf("Message Received!\n");
}

void	atob(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (0x01 << bit)))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(500);
		bit++;
	}
}

int	main(int ac, char **av)
{
	int	pid;
	int	i;

	i = 0;
	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		while (av[2][i] != '\0')
		{
			atob(pid, av[2][i]);
			i++;
		}
		signal(SIGUSR2, confirm_msg);
		atob(pid, '\0');
	}
	else
	{
		ft_printf("Error\nUsage: ./client <pid> <message to send>\n");
		return (1);
	}
	return (0);
}
