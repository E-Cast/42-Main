/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 11:25:15 by ecastong          #+#    #+#             */
/*   Updated: 2023/05/06 12:20:50 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	st_countwords(char *str, char sep);
static void	st_fillword(char *word, char *str_p1, char *str_p2);
// static void	st_freeall();

struct s_init {
	size_t	i;
	size_t	j;
	size_t	start;
	int		counter;
	int		nb_words;
};

// char	**ft_split()
// {

// }

static int	st_countwords(char *str, char sep)
{
	struct s_init ini = {0, 0, 0, 0, 0};
	while (*str)
	{
		if (ini.counter > 0 && *str == sep)
			ini.counter = 0;
		if (ini.counter == 0 && *str != sep)
		{
			ini.nb_words++;
			ini.counter++;
		}
	str++;
	}
	return (ini.nb_words);
}

static void	st_fillword(char *word, char *str_p1, char *str_p2)
{
	while (str_p1 <= str_p2)
	{
		*word = *str_p1;
		word++;
	str_p1++;
	}
	*word = '\0';
}

// static void	st_freeall()
// {

// }

#include <stdio.h>

int	main(void)
{
	char	*str;
	char	res[20];

	str = "   Hello  world !   ";
	printf("nb of words:%i\n", st_countwords(str, ' '));
	st_fillword(res, str + 3, str + 10);
	printf("original:%s\nWord:%s\n", str, res);
}
