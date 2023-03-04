int	ft_isprint(int	c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	for (int i = 0; i <= 127; i++)
// 		printf("%c, %d, isprint: %d, ft_isprint: %d\n", i, i, isprint(i), ft_isprint(i));

// 	return (0);
// }