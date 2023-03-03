int	ft_isalnum(int	c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {

// 	for (int i = 0; i <= 127; i++)
// 		printf("%c %d isalnum: %d ft_isalnum: %d\n", i, i, ft_isalnum(i), ft_isalnum(i));

// 	return (0);
// }