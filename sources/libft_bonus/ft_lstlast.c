/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecast <ecast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:01:00 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/14 14:39:28 by ecast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Returns the last node of the list.*/
t_list	*ft_lstlast(t_list *list)
{
	t_list	*current_node;

	if (!list)
		return (0);
	current_node = list;
	while (current_node -> next)
		current_node = current_node -> next;
	return (current_node);
}
