/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:02:26 by ecastong          #+#    #+#             */
/*   Updated: 2023/04/25 00:11:58 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *src1, const void *src2, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	if (!src1 && !src2)
		return (0);
	if (!src1)
		return (-1);
	if (!src2)
		return (1);
	str1 = (unsigned char *)src1;
	str2 = (unsigned char *)src2;
	i = 0;
	while (i < len)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
