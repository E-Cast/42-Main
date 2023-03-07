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

// 	memmove(&s1[3], &s1[0], 5);
// 	printf("memmove:%s\n", s1);
// 	ft_memmove(&s2[3], &s2[0], 5);
// 	printf("ft_memmove:%s\n", s2);

// 	int arr1[] = {1, 2, 3, 4, 5};
// 	int arr2[] = {1, 2, 3, 4, 5};

// 	memmove(&arr1[2], &arr1[0], 3 * sizeof(int));
// 	printf("memmove:");
// 	for (size_t i = 0; i < 5; i++)
// 	{
// 		printf("%d ", arr1[i]);
// 	}
// 	ft_memmove(&arr2[2], &arr2[0], 3 * sizeof(int));
// 	printf("\nft_memmove:");
// 	for (size_t i = 0; i < 5; i++)
// 	{
// 		printf("%d ", arr2[i]);
// 	}
// 	return (0);
// }