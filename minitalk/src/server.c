/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:19:30 by daguiar-          #+#    #+#             */
/*   Updated: 2023/05/10 11:59:33 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	btoa(int sig, siginfo_t *info, void *context)
{
	static int	bit;
	static int	i;

	(void)context;
	if (sig == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		if (i == 0)
			kill(info->si_pid, SIGUSR2);
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(int ac, char **av)
{
	int					pid;
	struct sigaction	act;

	(void)av;
	if (ac != 1)
	{
		ft_printf("Error\nUsage: ./server\n");
		return (1);
	}
	pid = getpid();
	ft_printf("Server PID: %d\n", pid);
	act.sa_sigaction = btoa;
	sigemptyset(&act.sa_mask);
	act.sa_flags = SA_SIGINFO;
	while (ac == 1)
	{
		sigaction(SIGUSR1, &act, NULL);
		sigaction(SIGUSR2, &act, NULL);
		pause ();
	}
	return (0);
}