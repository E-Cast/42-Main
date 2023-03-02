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
// 	char	num = '9';
// 	char	chr = 'A';

// 	printf("isdigit: %c ft_isdigit: %c\n", isdigit(num) + '0', ft_isdigit(num) + '0');
// 	printf("isdigit: %c ft_isdigit: %c\n", isdigit(chr) + '0', ft_isdigit(chr) + '0');

// 	return (0);
// }