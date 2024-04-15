/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_hexcar_to_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 07:30:04 by ecastong          #+#    #+#             */
/*   Updated: 2024/04/15 07:30:13 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	hexchar_to_int(char hex)
{
	if (ft_isdigit(hex))
		return (hex - '0');
	else if (hex >= 'A' && hex <= 'Z')
		return ((hex + 10) - 'A');
	else if (hex >= 'a' && hex <= 'z')
		return ((hex + 10) - 'a');
	return (0);
}
