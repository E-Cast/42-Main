/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecast <ecast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:12:40 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/14 14:39:58 by ecast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Adds the node node to the end of the list.*/
void	ft_lstadd_back(t_list **list, t_list *new_node)
{
	t_list	*current_node;

	if (!new_node)
		return ;
	if (!*list)
		*list = new_node;
	else
	{
		current_node = ft_lstlast(*list);
		current_node -> next = new_node;
	}
}
