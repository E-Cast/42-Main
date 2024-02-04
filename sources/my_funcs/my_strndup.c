/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:26:48 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/04 12:11:56 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*my_strndup(const char *src, size_t len)
{
	char	*dest;
	size_t	i;

	if (!src)
		return (NULL);
	if (ft_strlen(src) < len)
		dest = (char *)malloc(ft_strlen(src) + 1);
	else
		dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
