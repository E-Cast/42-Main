char	ft_toupper(char	chr)
{
	if (chr >= 'a' && chr <= 'z')
		chr -= 32;;
	return (chr);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	char	chr1;
// 	char	chr2;

// 	chr1 = 'g';
// 	chr2 = chr1;
// 	printf("Original:%c\ntoupper:%c\nft_toupper:%c\n", chr1, toupper(chr1), ft_toupper(chr2));
// 	chr1 = 'A';
// 	chr2 = chr1;
// 	printf("Original:%c\ntoupper:%c\nft_toupper:%c\n", chr1, toupper(chr1), ft_toupper(chr2));
// 	chr1 = '9';
// 	chr2 = chr1;
// 	printf("Original:%c\ntoupper:%c\nft_toupper:%c", chr1, toupper(chr1), ft_toupper(chr2));
// }