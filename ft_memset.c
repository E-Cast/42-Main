#include <stddef.h>
void	ft_memset(void* s, int ch , size_t n)
{
	unsigned	char *p;
	size_t	i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = ch;
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>
// int	main(void) {
// 	char s1[] = "Hello";
// 	char s2[] = "Hello";

// 	memset(&s1, '.', 5);
// 	ft_memset(&s2, '.', 5);
// 	printf("memset: %s ft_memset: %s\n", s1, s2);

// 	return (0);
// }