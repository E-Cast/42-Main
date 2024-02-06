/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strfreejoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:15:05 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/06 15:29:25 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates and returns a new string, which is the result of the concatenation
	of str1 and str2. Frees str1 and str2*/
char	*my_strfreejoin(const char *str1, const char *str2)
{
	char	*dest;
	size_t	i;
	size_t	j;
	size_t	dest_len;

	if (!str1 || !str2)
		return (NULL);
	dest_len = ft_strlen(str1) + ft_strlen(str2) + 1;
	dest = (char *)ft_calloc(dest_len, sizeof(char));
	if (dest)
	{
		i = 0;
		j = 0;
		while (str1[i])
		{
			dest[i] = str1[i];
			i++;
		}
		while (str2[j])
			dest[i++] = str2[j++];
		dest[i] = '\0';
	}
	my_safefree(str1);
	my_safefree(str2);
	return (dest);
}
