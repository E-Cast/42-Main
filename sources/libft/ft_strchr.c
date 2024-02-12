/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:43:19 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/12 16:20:38 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Returns the first occurrence of the character chr in src.*/
char	*ft_strchr(const char *str, int chr)
{
	return (ft_memchr(str, chr, ft_strlen(str) + 1));
}
