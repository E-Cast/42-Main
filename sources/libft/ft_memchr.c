/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:46:45 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/08 13:39:43 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*locates the first occurrence of byte in src*/
void	*ft_memchr(const void *src, int byte, size_t len)
{
	unsigned char	*str;
	unsigned char	chr;
	size_t			i;

	if (!src)
		return (NULL);
	str = (unsigned char *)src;
	chr = (unsigned char)byte;
	i = 0;
	while (i < len)
	{
		if (str[i] == chr)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
