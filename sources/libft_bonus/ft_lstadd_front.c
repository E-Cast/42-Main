/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 00:31:34 by ecastong          #+#    #+#             */
/*   Updated: 2023/05/03 02:22:56 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **first_node, t_list *new_node)
{
	if (!new_node)
		return ;
	new_node -> next = *first_node;
	*first_node = new_node;
}
