/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecast <ecast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:56:26 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/14 14:49:56 by ecast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Creates a new list by calling fnc on every node of the original 
	list. Uses the function del on a node if needed.*/
t_list	*ft_lstmap(t_list *list, void *(*fnc)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!list || !fnc || !del)
		return (NULL);
	new_list = NULL;
	while (list)
	{
		new_node = ft_lstnew(fnc(list -> content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			new_list = NULL;
			del(new_list);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		list = list -> next;
	}
	return (new_list);
}
