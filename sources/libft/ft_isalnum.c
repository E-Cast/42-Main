/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:11:19 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/06 15:07:52 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Tests chr to see if either ft_isalpha or ft_isdigit are true.*/
int	ft_isalnum(int chr)
{
	if (ft_isalpha(chr))
		return (1);
	if (ft_isdigit(chr))
		return (1);
	return (0);
}
