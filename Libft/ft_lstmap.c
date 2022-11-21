/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:37:23 by daguiar-          #+#    #+#             */
/*   Updated: 2022/11/21 17:04:49 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;

	l = malloc(ft_lstsize(lst) + 1);
	if (!l || !lst)
		return (NULL);
	while (lst)
	{
		l = f(lst->content);
		l = l->next;
		lst = lst->next;
	}
	return (l);
}
