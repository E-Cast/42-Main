/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:42:36 by ecastong          #+#    #+#             */
/*   Updated: 2024/04/30 13:41:50 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Converts the initial portion of the string into a 
	long long integer and returns it.*/
long long	my_atoll(const char *str)
{
	size_t		i;
	int			sign;
	long long	num;

	i = 0;
	sign = 1;
	num = 0;
	if (str && str[0])
	{
		while (my_isspace(str[i]))
			i++;
		if (str[i] == '-')
			sign = -1;
		if (str[i] == '+' || str[i] == '-')
			i++;
		while (str[i] && (ft_isdigit(str[i])))
		{
			num = num * 10 + (str[i] - 48) * sign;
			i++;
		}
	}
	return (num);
}
