/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:35:00 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/12 17:14:09 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Finds how many digits an integer contains in a certain base.*/
int	my_intlen(int num, int base)
{
	int	len;

	if (base == 1)
		return (0);
	len = 1;
	num /= base;
	while (num != 0)
	{
		num /= base;
		len++;
	}
	return (len);
}
