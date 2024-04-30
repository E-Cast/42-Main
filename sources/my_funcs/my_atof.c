/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:26:39 by ecastong          #+#    #+#             */
/*   Updated: 2024/04/30 19:33:57 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Converts the initial portion of the string into a 
	double float and returns it.*/
double	my_atof(const char *str)
{
	size_t	j;
	int		sign;
	double	num;
	double	tmp;

	if (!str || !str[0])
		return (0);
	sign = 1;
	while (*str && ft_isdigit(*str) == 0)
	{
		if (*str == '-' && ft_isdigit(str[1]))
			sign = -1;
		str++;
	}
	num = (double)my_atoll(str);
	while (*str && *str != '.')
		str++;
	str++;
	tmp = my_atoll(str);
	j = 0;
	while (str[j] && ft_isdigit(str[j]) != 0)
		j++;
	while (j-- > 0)
		tmp /= 10;
	return ((num + tmp) * sign);
}
