/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecast <ecast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 00:49:02 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/24 21:30:49 by ecast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Counts the number of nodes in the list.*/
size_t	ft_lstsize(t_list *list)
{
	size_t	i;
	t_list	*current_node;

	if (!list)
		return (0);
	i = 0;
	current_node = list;
	while (current_node)
	{
		current_node = current_node->next;
		i++;
	}
	return (i);
}
