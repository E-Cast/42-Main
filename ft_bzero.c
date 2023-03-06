#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>
// int	main(void) {
// 	char s1[] = "Hello";
// 	char s2[] = "Hello";

// 	memset(&s1, 0, 5);
// 	ft_bzero(&s2, 5);
// 	printf("memset/bzero: %s, ft_bzero: %s\n", s1, s2);

// 	return (0);
// }