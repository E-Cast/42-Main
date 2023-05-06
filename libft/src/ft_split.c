/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 21:28:52 by ecastong          #+#    #+#             */
/*   Updated: 2023/05/03 08:06:21 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

static int	st_countwords(const char *str, char c);
static void	*st_freeall(char **strs, size_t count);

static char	*st_fill_word(const char *str, size_t start, size_t end);
/* you'll probably find another way to do this than what I did
 * it's not the best thing I did, but it works
 */
// static void ft_initiate_vars(size_t *i, int *j, int *s_word);

struct	s_init
{
	size_t	i;
	size_t	j;
	size_t	counter;
	size_t	word_start;
} init = {0, 0, 0, 0};

char	**ft_split(const char *str, char sep)
{
	struct s_init	ini;
	char			**words;

	words = ft_calloc((st_countwords(str, sep) + 1), sizeof(char *));
	// words = calloc((st_countwords(str, sep) + 1), sizeof(char *));
	if (!words)
		return (NULL);
	while (str[ini.i])
	{
		if (str[ini.i] == sep && ini.counter > 0)
		{
			words[ini.j] = st_fill_word(str, ini.word_start, ini.i);
			if (!(words[ini.j]))
				return (st_freeall(words, st_countwords(str, sep)));
			ini.counter = 0;
			ini.j++;
		}
		if (str[ini.i] != sep && ini.counter == 0)
		{
			ini.word_start = ini.i;
			ini.counter++;
		}
		ini.i++;
	}
	return (words);
}

static char	*st_fill_word(const char *str, size_t start, size_t index)
{
	struct s_init	ini;
	char			*word;
	size_t			len;

	ini.i = 0;
	len = index - start;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (len > 0)
	{
		word[ini.i] = str[start];
		ini.i++;
		start++;
		len--;
	}
	word[ini.i] = 0;
	return (word);
}

static void	*st_freeall(char **words, size_t nb_words)
{
	size_t	i;

	i = 0;
	while (i < nb_words)
	{
		free(words[i]);
		i++;
	}
	free(words);
	return (NULL);
}

static int	st_countwords(const char *str, char sep)
{
	size_t	i;
	size_t	counter;
	size_t	nb_words;

	i = 0;
	counter = 0;
	nb_words = 0;
	while (str[i])
	{
		if (str[i] == sep)
			counter = 0;
		if (str[i] != sep && counter == 0)
		{
			nb_words++;
			counter++;
		}
		i++;
	}
	return (nb_words);
}

// int	main(void)
// {
// 	char	**words;
// 	size_t	i;

// 	words = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
// 	i = 0;
// 	while (words[i])
// 	{
// 		printf("%s\n", words[i]);
// 		i++;
// 	}
// }
