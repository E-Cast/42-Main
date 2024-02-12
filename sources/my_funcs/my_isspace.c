/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:11:57 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/12 17:15:15 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Tests chr to see if it is a whitespace character.*/
int	my_isspace(int cr)
{
	if ((cr >= 9 && cr <= 13) || cr == ' ')
		return (cr);
	return (0);
}
