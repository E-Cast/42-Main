/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:30:44 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/12 17:08:19 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
void	my_strrealloc(char **str)
{
	char	*tmp;

	if (!str || !*str)
		return ;
	if (*str[0] == '\0')
	{
		*str = my_safefree(*str);
		return ;
	}
	tmp = ft_strdup(*str);
	if (tmp == NULL)
		return ;
	my_safefree(*str);
	*str = tmp;
}
