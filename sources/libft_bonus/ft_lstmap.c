/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:56:26 by ecastong          #+#    #+#             */
/*   Updated: 2023/05/03 04:23:40 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *node, void *(*fnc)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!node || !fnc || !del)
		return (NULL);
	new_list = NULL;
	while (node)
	{
		new_node = ft_lstnew(fnc(node -> content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			new_list = NULL;
			del(new_list);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		node = node -> next;
	}
	return (new_list);
}
