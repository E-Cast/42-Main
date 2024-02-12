/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:29:55 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/12 17:56:05 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Converts the uppercase character chr, to the 
	corresponding lowercase character.*/
int	ft_tolower(int chr)
{
	if (chr >= 'A' && chr <= 'Z')
		return (chr + 32);
	return (chr);
}
