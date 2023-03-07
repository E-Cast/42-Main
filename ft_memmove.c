#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 1;
	while (i <= len)
	{
		((char *)dest)[len - i] = ((char *)src)[len - i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char s1[] = "Hello World";
// 	char s2[] = "Hello World";

// 	// use standard memmove
// 	memmove(&s1[3], &s1[0], 5);
// 	printf("memmove: %s\n", s1);

// 	// use your implementation
// 	ft_memmove(&s2[3], &s2[0], 5);
// 	printf("ft_memmove: %s\n", s2);

// 	return (0);
// }