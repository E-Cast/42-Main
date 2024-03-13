/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:12:47 by ecastong          #+#    #+#             */
/*   Updated: 2024/03/13 14:17:45 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates and returns a new string, which is the 
	result of the concatenation of str1 and str2.*/
char	*ft_strjoin(const char *str1, const char *str2)
{
	char	*dest;
	size_t	dest_len;

	if (!str1 || !str2)
		return (NULL);
	dest_len = ft_strlen(str1) + ft_strlen(str2);
	dest = (char *)ft_calloc(dest_len + 1, sizeof(char));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, str1, ft_strlen(str1));
	ft_memcpy(dest + ft_strlen(dest), str2, ft_strlen(str2));
	dest[dest_len] = '\0';
	return (dest);
}
