/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:35:13 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/12 14:44:03 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*Writes zero to len bite in the string.*/
void	ft_bzero(void *str, size_t len)
{
	ft_memset(str, 0, len);
}
