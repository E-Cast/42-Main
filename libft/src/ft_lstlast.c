/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:01:00 by ecastong          #+#    #+#             */
/*   Updated: 2023/05/03 02:24:35 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *first_node)
{
	t_list	*current_node;

	if (!first_node)
		return (0);
	current_node = first_node;
	while (current_node -> next)
		current_node = current_node -> next;
	return (current_node);
}
