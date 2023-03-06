#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*((unsigned char *)dest_ptr + i) = *((unsigned char *)src_ptr + i);
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	src[] = "Hello World";
// 	char	dest1[8];
// 	char	dest2[8];

// 	dest1[7] = '\0';
// 	dest2[7] = '\0';
// 	memcpy(dest1, src, 7);
// 	ft_memcpy(dest2, src, 7);
// 	printf("original: %s, memcpy: %s, ft_memcpy: %s", src, dest1, dest2);
// }