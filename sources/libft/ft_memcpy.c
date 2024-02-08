/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:49:14 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/08 13:42:23 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copies len bytes from src to dest.*/
void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;
	size_t			i;

	if (!dest || !src)
		return (dest);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}
