/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:36:10 by ecastong          #+#    #+#             */
/*   Updated: 2023/04/21 00:44:56 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < count * size)
		ptr[i++] = 0;
	return ((void *)ptr);
}
