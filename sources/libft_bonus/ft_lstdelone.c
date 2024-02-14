/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecast <ecast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:31:57 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/14 14:41:34 by ecast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Frees the node's content with the function
	del and then frees the node itself.*/
void	ft_lstdelone(t_list *node, void (del)(void *))
{
	if (!node || !del)
		return ;
	del(node -> content);
	free(node);
}
