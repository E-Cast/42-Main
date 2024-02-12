/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:26:55 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/12 17:56:02 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Converts the lowercase character chr, to the 
	corresponding uppercase character.*/
int	ft_toupper(int chr)
{
	if (chr >= 'a' && chr <= 'z')
		return (chr - 32);
	return (chr);
}
