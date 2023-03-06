int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {

// 	for (int i = 0; i <= 127; i++)
// 		printf("%c, %d, isalnum: %d, ft_isalnum: %d\n",
// 				i, i, ft_isalnum(i), ft_isalnum(i));

// 	return (0);
// }