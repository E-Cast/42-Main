/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:56:06 by ecastong          #+#    #+#             */
/*   Updated: 2023/04/25 01:29:03 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int src_c)
{
	char	*str;
	char	chr;
	char	*res;
	size_t	i;

	if (!src)
		return (NULL);
	str = (char *)src;
	chr = (char)src_c;
	res = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)chr)
			res = &str[i];
		i++;
	}
	if (str[i] == chr)
		res = &str[i];
	return (res);
}
