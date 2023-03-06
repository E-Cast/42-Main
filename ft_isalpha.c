int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {

// 	for (int i = 0; i <= 127; i++)
// 		printf("%c, %d, isalpha: %d, ft_isalpha: %d\n", 
// 				i, i, ft_isalpha(i), ft_isalpha(i));

// 	return (0);
// }