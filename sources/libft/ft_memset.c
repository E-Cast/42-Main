/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:57:44 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/12 14:36:13 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Writes len bytes of value c to str.*/
void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	if (!str)
		return (str);
	ptr = (unsigned char *)str;
	i = 0;
	while (i < len)
		ptr[i++] = (unsigned char)c;
	return (str);
}
