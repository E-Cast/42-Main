/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecast <ecast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:46:40 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/24 21:30:49 by ecast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Calls the function fnc on the content of every node in the list.*/
void	ft_lstiter(t_list *list, void (*fnc)(void *))
{
	if (!list || !fnc)
		return ;
	while (list)
	{
		fnc(list->content);
		list = list->next;
	}
}
