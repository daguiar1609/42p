/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:56:36 by daguiar-          #+#    #+#             */
/*   Updated: 2023/06/13 16:51:17 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	max_bits(t_list	**stack)
{
	t_list	*head;
	int		max;
	int		maxbits;

	head = *stack;
	max = head->index;
	maxbits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> maxbits) != 0)
		maxbits++;
	return (maxbits);
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*head_a;
	int		size;
	int		i;
	int		j;
	int		maxbits;

	i = -1;
	head_a = *stack_a;
	size = ft_lstsize(head_a);
	maxbits = max_bits(stack_a);
	while (++i < maxbits)
	{
		j = -1;
		while (++j < size)
		{
			head_a = *stack_a;
			if (((head_a->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (ft_lstsize(*stack_b) != 0)
			pa (stack_a, stack_b);
	}
}
