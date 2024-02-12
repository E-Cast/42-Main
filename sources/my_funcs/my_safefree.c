/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_safefree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:30:31 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/12 16:35:55 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Ensures the received pointer is valid and then frees it, returns NULL.*/
void	*my_safefree(void *ptr)
{
	if (ptr)
	{
		free(ptr);
		ptr = NULL;
	}
	return (NULL);
}
