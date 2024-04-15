/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_atoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 22:31:05 by ecastong          #+#    #+#             */
/*   Updated: 2024/04/15 07:46:19 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	my_atoh(const char *str)
{
	size_t	i;
	size_t	num;

	i = 0;
	num = 0;
	while (my_isspace(str[i]))
		i++;
	if (str[i] && str[i] == '0' && (str[i + 1] == 'x' || str[i + 1] == 'X'))
		i += 2;
	while (str[i] && (my_isset(str[i], "0123456789abcdefABCDEF")))
	{
		num = num * 16 + my_hexchar_to_int(str[i]);
		i++;
	}
	return (num);
}
