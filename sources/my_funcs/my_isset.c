/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_isset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecast <ecast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:29:22 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/14 14:35:00 by ecast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Tests chr to see if it matches a character in the string set.*/
int	my_isset(char chr, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (chr == set[i++])
			return (1);
	}
	return (0);
}
