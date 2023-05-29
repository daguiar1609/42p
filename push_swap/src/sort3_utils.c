/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:17:11 by daguiar-          #+#    #+#             */
/*   Updated: 2023/05/23 11:21:54 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_head_min(t_list **stack_a)
{
	ra(stack_a);
	sa(stack_a);
	rra(stack_a);
}

void	sort_head_nextmin(t_list *head, t_list **stack_a, int min)
{
	if (head->next->index == min)
		sa(stack_a);
	else
		rra(stack_a);
}
