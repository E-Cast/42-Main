/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 01:47:10 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/12 16:21:17 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Applies the function fnc on each character of str.*/
void	ft_striteri(char *str, void (*fnc)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		(*fnc)(i, &str[i]);
		i++;
	}
	return ;
}
