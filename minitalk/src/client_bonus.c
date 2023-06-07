/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:13:22 by daguiar-          #+#    #+#             */
/*   Updated: 2023/06/07 11:33:58 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

static void	confirm(int signal)
{
	if (signal == SIGUSR1)
		ft_printf("\033[0;32mReceived!\033[0;32m\n", 1);
	else
		ft_printf("\033[0;32mReceived!\033[0;32m\n", 1);
}

void	send_bits(int pid, char c)
{
	int		bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (0x01 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit++;
	}
}

int	pid_check(char *pid)
{
	int	i;

	i = 0;
	while (pid[i])
		if (!ft_isdigit(pid[i++]))
			return (0);
	return (1);
}

int	main(int ac, char **av)
{
	int	i;

	if (!pid_check(av[1]))
	{
		ft_printf("Invalid PID.\n");
		return (1);
	}
	i = 0;
	if (ac == 3)
	{
		while (av[2][i] != '\0')
		{
			signal(SIGUSR1, confirm);
			signal(SIGUSR2, confirm);
			send_bits(ft_atoi(av[1]), av[2][i++]);
		}
		send_bits(ft_atoi(av[1]), '\n');
	}
	else
	{
		ft_printf("ERROR\nUsage: ./client <Server PID> <Message to send>");
		return (1);
	}
	return (0);
}
