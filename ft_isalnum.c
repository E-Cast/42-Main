int	ft_isalnum(int	c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (2);
	else if (c >= '0' && c <= '9')
		return (4);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	char	upp_c = 'Z';
// 	char	low_c = 'a';
// 	char	num = '7';

// 	printf("isalnum: %c ft_isalnum: %c\n", isalnum(upp_c) + '0', ft_isalnum(upp_c) + '0');
// 	printf("isalnum: %c ft_isalnum: %c\n", isalnum(low_c) + '0', ft_isalnum(low_c) + '0');
// 	printf("isalnum: %c ft_isalnum: %c\n", isalnum(num) + '0', ft_isalnum(num) + '0');

// 	return (0);
// }