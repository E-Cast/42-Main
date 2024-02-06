/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:35:13 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/06 14:58:44 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Writes zero to every bite in the string.*/
void	ft_bzero(void *str, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!str)
		return ;
	ptr = (char *)str;
	i = 0;
	while (i < len)
		ptr[i++] = 0;
}
