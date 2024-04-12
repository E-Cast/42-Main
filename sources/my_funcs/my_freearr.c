/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_arrfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecast <ecast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 02:48:51 by ecast             #+#    #+#             */
/*   Updated: 2024/02/19 03:04:33 by ecast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Safely frees the array and it's content, returns NULL*/
void	*my_freearr(void **array, size_t size)
{
	size_t	index;

	index = 0;
	while (index < size)
		my_safefree(array[index++]);
	my_safefree(array);
	array = NULL;
	return (array);
}
