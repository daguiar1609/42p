/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:18:57 by daguiar-          #+#    #+#             */
/*   Updated: 2023/05/25 08:56:53 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../Libft/libft.h"
# include <stdio.h>
# include <limits.h>

//error checking + index assignment
int		duplicated_numbers(int ac, char **av);
int		valid_numbers(int ac, char **av);
int		minus_check(int ac, char **av);
int		int_limits(int ac, char **av);
int		sort_check(t_list **stack);
void	assign_index(t_list **stack);
void	errors_handler(int ac, char **av);

//sorting methods
void	simple_sort(t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b);

//moves
int		push(t_list **stack_to, t_list **stack_from);
int		swap(t_list **stack);
int		rotate(t_list **stack);
int		rev_rotate(t_list **stack);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_a, t_list **stack_b);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);

//sort3 functions
void	sort_head_min(t_list **stack_a);
void	sort_head_nextmin(t_list *head, t_list **stack_a, int min);

//utils
int		get_distance(t_list **stack, int index);
void	free_stack(t_list **stack);

#endif