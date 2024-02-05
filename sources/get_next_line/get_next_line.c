/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 07:38:00 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/04 20:08:04 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*str_utils(char *str1, char *str2, char *dest)
{
	ssize_t	i;
	size_t	j;

	if (ft_strlen(str1) + ft_strlen(str2) == 0)
		return (NULL);
	if (!dest)
	{
		dest = malloc((ft_strlen(str1) + ft_strlen(str2) + 1) * sizeof(char));
		if (!dest)
		{
			my_safefree(str1);
			return (NULL);
		}
	}
	i = 0;
	j = 0;
	while (str1 && str1[i])
		dest[i++] = str1[j++];
	j = 0;
	while (str2 && str2[j])
		dest[i++] = str2[j++];
	dest[i] = '\0';
	my_safefree(str1);
	return (dest);
}

static int	read_fd(int fd, char *stash, char **line)
{
	int	b_read;

	b_read = 1;
	if (stash[0] == '\0')
	{
		b_read = read(fd, stash, BUFFER_SIZE);
		if (b_read == 0)
			return (0);
		if (b_read == -1)
		{
			my_safefree(*line);
			return (-1);
		}
	}
	*line = str_utils(*line, stash, NULL);
	if (*line == NULL)
		return (-1);
	ft_bzero(stash, BUFFER_SIZE);
	return (b_read);
}

char	*get_next_line(int fd)
{
	static char	stash[OPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	int			errcode;

	if (fd < 0 || fd >= OPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	while (!ft_strchr(line, '\n'))
	{
		errcode = read_fd(fd, stash[fd], &line);
		if (errcode == 0)
			return (line);
		if (errcode == -1)
			return (NULL);
	}
	str_utils(NULL, &line[ft_strchr(line, '\n') - line + 1], stash[fd]);
	line[ft_strchr(line, '\n') - line + 1] = '\0';
	return (str_utils(line, NULL, NULL));
}
