/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 01:57:56 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/12 14:52:17 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Outputs the character chr to the file descriptor.*/
void	ft_putchar_fd(char chr, int fd)
{
	write(fd, &chr, 1);
	return ;
}
