char	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	char	chr1;
// 	char	chr2;

// 	chr1 = 'g';
// 	chr2 = chr1;
// 	printf("Original:%c\ntolower:%c\nft_tolower:%c\n", chr1, 
// 		tolower(chr1), ft_tolower(chr2));
// 	chr1 = 'A';
// 	chr2 = chr1;
// 	printf("Original:%c\ntolower:%c\nft_tolower:%c\n", chr1, 
// 		tolower(chr1), ft_tolower(chr2));
// 	chr1 = '9';
// 	chr2 = chr1;
// 	printf("Original:%c\ntolower:%c\nft_tolower:%c", chr1, 
// 		tolower(chr1), ft_tolower(chr2));
// }