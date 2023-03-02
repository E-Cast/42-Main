int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (2);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	char	upp_c = 'G';
// 	char	low_c = 'g';
// 	char	num = '9';

// 	printf("isalpha: %c ft_isalpha: %c\n", isalpha(upp_c) + '0', ft_isalpha(upp_c) + '0');
// 	printf("isalpha: %c ft_isalpha: %c\n", isalpha(low_c) + '0', ft_isalpha(low_c) + '0');
// 	printf("isalpha: %c ft_isalpha: %c\n", isalpha(num) + '0', ft_isalpha(num) + '0');

// 	return (0);
// }