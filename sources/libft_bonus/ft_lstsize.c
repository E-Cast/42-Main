/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 00:49:02 by ecastong          #+#    #+#             */
/*   Updated: 2023/05/03 02:25:47 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstsize(t_list *first_node)
{
	size_t	i;
	t_list	*current_node;

	if (!first_node)
		return (0);
	i = 0;
	current_node = first_node;
	while (current_node)
	{
		current_node = current_node -> next;
		i++;
	}
	return (i);
}
