#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i--;
	}
	if (s[i] == (char)c)
		return ((char *) &s[i]);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str[] = "hello world";
// 	char *ptr1 = strrchr(str, 'h');
// 	char *ptr2 = strrchr(str, 'h');
// 	printf("Original strrchr:%s\nCustom strrchr:%s\n", ptr1, ptr2);

// 	char *ptr3 = strrchr(str, 'z');
// 	char *ptr4 = strrchr(str, 'z');
// 	printf("Original strrchr:%s\nCustom strrchr:%s\n", ptr3, ptr4);

// 	char *ptr5 = strrchr(str, '\0');
// 	char *ptr6 = strrchr(str, '\0');
// 	printf("Original strrchr:%s$\nCustom strrchr:%s$\n", ptr5, ptr6);

// 	char *ptr7 = strrchr(str, 'l');
// 	char *ptr8 = strrchr(str, 'l');
// 	printf("Original strrchr:%s\nCustom strrchr:%s\n", ptr7, ptr8);
// }
