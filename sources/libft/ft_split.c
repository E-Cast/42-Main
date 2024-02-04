/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 21:28:52 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/04 10:46:54 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// //Hello World !//
// /*Counts the number of words and allocates the array accordingly.*/
// static char	**alloc_array(char const *str, char delim)
// {
// 	int	index;
// 	int	cntr;
// 	int	num_of_str;

// 	index = 0;
// 	cntr = 0;
// 	num_of_str = 1;
// 	while (str[index] != '\0')
// 	{
// 		if (str[index] != delim)
// 			cntr++;
// 		else if (cntr > 0 && str[index + 1] != '\0' && str[index + 1] != delim)
// 		{
// 			cntr = 0;
// 			num_of_str++;
// 		}
// 		index++;
// 	}
// 	printf("%i\n", num_of_str);
// 	return (calloc(num_of_str + 1, sizeof(char *)));
// }

// static void	fill_array(char **array, char *str, char delim)
// {
// 	int	str_index;
// 	int	arr_index;

// 	str_index = 0;
// 	arr_index = 0;
// 	while (str[str_index] != NULL)
// 	{
		
// 	}
// }

// char	**ft_split(char const *str, char delim)
// {
// 	char	**array;

// 	array = alloc_array(str, delim);
// 	if (array == NULL)
// 		return (NULL);
// 	// fill_array(array, str, delim);
// 	return (array);
// }

// int	main(int argc, char **argv)
// {
// 	if (argc < 2)
// 		return (1);
// 	ft_split(argv[1], 32);
// }

// static int	st_countwords(const char *str, char c);
// static void	*st_freeall(char **strs, size_t count);

// static char	*st_fill_word(const char *str, size_t start, size_t end);

// struct	s_init
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	counter;
// 	size_t	word_start;
// } init = {0, 0, 0, 0};

// char	**ft_split(const char *str, char sep)
// {
// 	struct s_init	ini;
// 	char			**words;

// 	words = ft_calloc((st_countwords(str, sep) + 1), sizeof(char *));
// 	if (!words)
// 		return (NULL);
// 	while (str[ini.i])
// 	{
// 		if (str[ini.i] == sep && ini.counter > 0)
// 		{
// 			words[ini.j] = st_fill_word(str, ini.word_start, ini.i);
// 			if (!(words[ini.j]))
// 				return (st_freeall(words, st_countwords(str, sep)));
// 			ini.counter = 0;
// 			ini.j++;
// 		}
// 		if (str[ini.i] != sep && ini.counter == 0)
// 		{
// 			ini.word_start = ini.i;
// 			ini.counter++;
// 		}
// 		ini.i++;
// 	}
// 	return (words);
// }

// static char	*st_fill_word(const char *str, size_t start, size_t index)
// {
// 	struct s_init	ini;
// 	char			*word;
// 	size_t			len;

// 	ini.i = 0;
// 	len = index - start;
// 	word = malloc((len + 1) * sizeof(char));
// 	if (!word)
// 		return (NULL);
// 	while (len > 0)
// 	{
// 		word[ini.i] = str[start];
// 		ini.i++;
// 		start++;
// 		len--;
// 	}
// 	word[ini.i] = 0;
// 	return (word);
// }

// static void	*st_freeall(char **words, size_t nb_words)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < nb_words)
// 	{
// 		free(words[i]);
// 		i++;
// 	}
// 	free(words);
// 	return (NULL);
// }

// static int	st_countwords(const char *str, char sep)
// {
// 	size_t	i;
// 	size_t	counter;
// 	size_t	nb_words;

// 	i = 0;
// 	counter = 0;
// 	nb_words = 0;
// 	while (str[i])
// 	{
// 		if (str[i] == sep)
// 			counter = 0;
// 		if (str[i] != sep && counter == 0)
// 		{
// 			nb_words++;
// 			counter++;
// 		}
// 		i++;
// 	}
// 	return (nb_words);
// }
