/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecast <ecast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 00:31:34 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/24 21:30:49 by ecast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Adds the node node to the beginning of the list.*/
void	ft_lstadd_front(t_list **list, t_list *node)
{
	if (!node)
		return ;
	node->next = *list;
	*list = node;
}
