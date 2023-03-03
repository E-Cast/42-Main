#include <stddef.h>
size_t	ft_strlen(char* str)
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
// 	char*	str = "String length";
// 	printf("%s strlen: %d ft_strlen: %d\n", str, strlen(str), ft_strlen(str));
// }
