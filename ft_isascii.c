int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	for (int i = -10; i <= 140; i++)
// 		printf("%c, %d, isascii: %d, ft_isascii: %d\n",
// 				i, i, isascii(i), ft_isascii(i));

// 	return (0);
// }