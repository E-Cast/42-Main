/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 21:28:52 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/04 14:25:59 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Counts the number of words and allocates the array accordingly.*/
static char	**alloc_array(char const *str, char delim)
{
	int	index;
	int	cntr;
	int	num_of_str;

	index = 0;
	cntr = 0;
	num_of_str = 1;
	while (str[index] != '\0')
	{
		if (str[index] != delim)
			cntr++;
		else if (cntr > 0 && str[index + 1] != '\0' && str[index + 1] != delim)
		{
			cntr = 0;
			num_of_str++;
		}
		index++;
	}
	return (ft_calloc(num_of_str + 1, sizeof(char *)));
}

/*Frees every element inside the array and then frees the array itself.*/
static void	*free_array(char **array, int arr_index)
{
	int	i;

	i = 0;
	while (i < arr_index)
	{
		array[i] = my_safefree(array[i]);
		i++;
	}
	array = my_safefree(array);
	return (array);
}

/*Allocates and adds the split strings into the array.*/
static char	**fill_array(char **array, const char *str, char delim)
{
	int	str_i;
	int	str_j;
	int	arr_index;

	str_i = 0;
	arr_index = 0;
	while (str[str_i] != '\0')
	{
		while (str[str_i] != '\0' && str[str_i] == delim)
			str_i++;
		str_j = str_i;
		while (str[str_j] != '\0' && str[str_j] != delim)
			str_j++;
		if (str[str_i] != '\0')
			array[arr_index] = my_strndup(&str[str_i], str_j - str_i);
		if (str[str_i] != '\0' && array[arr_index++] == NULL)
		{
			array = free_array(array, arr_index);
			return (array);
		}
		str_i = str_j;
	}
	return (array);
}

/*Splits the string into an array of strings using
	delim as delimiter. Returns the array.*/
char	**ft_split(char const *str, char delim)
{
	char	**array;

	array = alloc_array(str, delim);
	if (array == NULL)
		return (NULL);
	array = fill_array(array, str, delim);
	return (array);
}
