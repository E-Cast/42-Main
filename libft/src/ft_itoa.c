/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 22:08:35 by ecastong          #+#    #+#             */
/*   Updated: 2023/05/02 01:20:30 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_intlen(int num);
static char	*ft_itoaneg(int num, char *str, int len);

char	*ft_itoa(int num)
{
	int		len;
	char	*str;

	len = ft_intlen(num);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num >= 0)
	{
		while (len > 0)
		{
			str[len - 1] = (num % 10) + '0';
			num /= 10;
			len--;
		}
		return (str);
	}
	else
		return (ft_itoaneg(num, str, len));
}

static int	ft_intlen(int num)
{
	int	len;

	if (num == 0)
		return (1);
	if (num == -2147483648)
		return (11);
	len = 0;
	if (num < 0)
	{
		num *= -1;
		len += 1;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static char	*ft_itoaneg(int num, char *str, int len)
{
	if (num == -2147483648)
	{
		str[len - 1] = '8';
		num /= 10;
		len--;
	}
	num *= -1;
	while (num > 0)
	{
		str[len - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	str[0] = '-';
	return (str);
}
