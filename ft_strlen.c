#include <stddef.h>

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char*	str = "Hello World";
// 	printf("string: %s\nstrlen: %lld\nft_strlen: %lld\n", 
// 			str, strlen(str), ft_strlen(str));
// }
