/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:50:17 by ecastong          #+#    #+#             */
/*   Updated: 2023/04/26 21:12:01 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub_str;
	char	*str_ptr;
	size_t	i;

	if (!str)
		return (NULL);
	if (ft_strlen(str) < start)
		return (ft_strdup(""));
	if (ft_strlen(str + start) < len)
		len = ft_strlen(str + start);
	sub_str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!sub_str)
		return (NULL);
	str_ptr = (char *)str;
	i = 0;
	while (i < len)
	{
		sub_str[i] = str_ptr[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
