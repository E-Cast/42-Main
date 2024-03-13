/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_jointhree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecast <ecast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:13:14 by ecast             #+#    #+#             */
/*   Updated: 2024/03/13 14:14:58 by ecast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates and returns a new string, which is the 
	result of the concatenation of str1, str2 and str3.*/
char	*my_jointhree(const char *str1, const char *str2, const char *str3)
{
	char	*dest;
	size_t	dest_len;

	if (!str1 || !str2 || !str3)
		return (NULL);
	dest_len = ft_strlen(str1) + ft_strlen(str2) + ft_strlen(str3);
	dest = ft_calloc(dest_len + 1, sizeof(char));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, str1, ft_strlen(str1));
	ft_memcpy(dest + ft_strlen(dest), str2, ft_strlen(str2));
	ft_memcpy(dest + ft_strlen(dest), str3, ft_strlen(str3));
	dest[dest_len] = '\0';
	return (dest);
}
