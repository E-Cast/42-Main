int	ft_isdigit(int	c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	for (int i = 0; i <= 127; i++)
// 		printf("%c, %d, isdigit: %d, ft_isdigit: %d\n", i, i, isdigit(i), ft_isdigit(i));

// 	return (0);
// }