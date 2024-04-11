/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lstdellast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 01:55:29 by ecastong          #+#    #+#             */
/*   Updated: 2024/04/11 02:05:54 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Frees the node's content with the function
	del and then frees the node itself.*/
void	my_lstdellast(t_list **list, void (del)(void *))
{
	t_list	*second_to_last;

	if (!list || !*list || !del)
		return ;
	second_to_last = *list;
	if (second_to_last->next == NULL)
		return (ft_lstdelone(second_to_last, del));
	while (second_to_last->next && second_to_last->next->next)
		second_to_last = second_to_last->next;
	ft_lstdelone(second_to_last->next, del);
	second_to_last->next = NULL;
}
