/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:13:22 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/12 14:35:20 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copies len bytes from string src to string dst.*/
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	size_t				i;

	if (!dest || !src)
		return (NULL);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	i = 0;
	if (dest_ptr > src_ptr)
	{
		while (len-- > 0)
			dest_ptr[len] = src_ptr[len];
	}
	else
	{
		while (i < len)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	return (dest);
}
