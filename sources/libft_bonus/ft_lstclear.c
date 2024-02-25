/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecast <ecast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:37:29 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/24 21:31:02 by ecast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Clears the entire list by using ft_lstdelone on every node.*/
void	ft_lstclear(t_list **list, void (*del)(void *))
{
	t_list	*next_node;

	if (!*list || !del)
		return ;
	while (*list)
	{
		next_node = (*list)->next;
		ft_lstdelone(*list, del);
		*list = next_node;
	}
	free(*list);
	*list = NULL;
}
