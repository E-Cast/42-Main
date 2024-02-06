/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:26:49 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/06 14:04:45 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Compares the ascii values of str1 and str2. Returns an
	integer greater than, equal to, or less than 0 depending on 
	if str1 is greater than, equal to, or less than str2*/
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
