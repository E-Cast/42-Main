/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   me_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:26:49 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/04 11:33:33 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	my_strcmp(const char *str1, const char *str2)
{
	size_t	i;

	if (!str1 && !str2)
		return (0);
	if (!str1)
		return (-1);
	if (!str2)
		return (1);
	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
