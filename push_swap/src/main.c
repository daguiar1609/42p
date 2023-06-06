/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:17:32 by daguiar-          #+#    #+#             */
/*   Updated: 2023/06/05 17:40:44 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	stack_init(t_list **stack, int ac, char **av)
{
	int		i;
	t_list	*new;

	i = 0;
	while (++i < ac)
	{
		new = ft_lstnew(ft_atoi(av[i]));
		ft_lstadd_back(stack, new);
	}
	assign_index(stack);
}

static void	push_swap(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) <= 5)
		simple_sort(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (ac < 3)
		exit(write(2, "Not enough numbers!\n", 20));
	errors_handler(ac, av);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	stack_init(stack_a, ac, av);
	if (!sort_check(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return (0);
	}
	push_swap(stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
