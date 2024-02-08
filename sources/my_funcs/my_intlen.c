/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:35:00 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/08 13:35:01 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	my_intlen(int num, int base)
{
	int	len;

	len = 1;
	num /= base;
	while (num != 0)
	{
		num /= base;
		len++;
	}
	return (len);
}
