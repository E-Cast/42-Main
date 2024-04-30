/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:26:39 by ecastong          #+#    #+#             */
/*   Updated: 2024/04/30 13:36:36 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Converts the initial portion of the string into a 
	double float and returns it.*/
double	my_atof(char *str)
{
	long long	pre_decimal;
	long long	post_decimal;
	int			i;
	double		num;

	num = 0;
	if (str && str[0])
	{
		pre_decimal = my_atoll(str);
		while (str && *str && *str != '.')
			str++;
		str++;
		post_decimal = my_atoll(str);
		if (pre_decimal < 0)
			post_decimal = -post_decimal;
		i = 0;
		while (str[i] && ft_isdigit(str[i]) == 1)
			i++;
		num = (double)post_decimal;
		while (i-- > 0)
			num /= 10;
		num += (double)pre_decimal;
	}
	return (num);
}
