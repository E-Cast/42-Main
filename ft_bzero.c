#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	while (n--)
	{
		*str = 0;
		str++;
	}
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	s1[] = "Hello World";
// 	char	s2[sizeof(s1)];
// 	int		i;

// 	strcpy(s2, s1);
// 	memset(s1, 0, 7);
// 	ft_bzero(s2, 7);
// 	printf("memset/bzero:");
// 	for (i = 0; i < sizeof(s1); i++)
// 	{
// 		printf("%c", s1[i]);
// 	}
// 	printf("\nft_bzero:");
// 	for (i = 0; i < sizeof(s2); i++)
// 	{
// 		printf("%c", s2[i]);
// 	}

// 	return (0);
// }