/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 22:08:35 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/08 13:38:37 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates and returns the integer received as argument as a string*/
char	*ft_itoa(int num)
{
	int		str_len;
	char	*str;

	str_len = my_intlen(num, 10);
	if (num < 0)
		str_len++;
	str = ft_calloc(str_len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (num == 0)
		str[0] = '0';
	if (num < 0)
		str[0] = '-';
	while (num != 0)
	{
		str[str_len - 1] = num % 10 + '0';
		if (num < 0)
			str[str_len - 1] = (num % 10 * -1) + '0';
		num /= 10;
		str_len--;
	}
	return (str);
}
