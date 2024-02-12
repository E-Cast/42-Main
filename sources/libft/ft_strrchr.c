/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:56:06 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/12 17:22:51 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Returns the last occurrence of the character chr in src.*/
char	*ft_strrchr(const char *src, int chr)
{
	char	*str;
	char	*res;
	size_t	i;

	if (!src)
		return (NULL);
	str = (char *)src;
	res = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == chr)
			res = &str[i];
		i++;
	}
	if (str[i] == chr)
		res = &str[i];
	return (res);
}
