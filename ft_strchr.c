#include <stddef.h>

char	*strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	i++;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *) &s[i]);
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "hello world";
// 	char *ptr1 = strchr(str, 'w');
// 	char *ptr2 = strchr(str, 'w');
// 	printf("Original strchr:%s\nCustom strchr:%s\n", ptr1, ptr2);

// 	char *ptr3 = strchr(str, 'z');
// 	char *ptr4 = strchr(str, 'z');
// 	printf("Original strchr:%s\nCustom strchr:%s\n", ptr3, ptr4);

// 	char *ptr5 = strchr(str, '\0');
// 	char *ptr6 = strchr(str, '\0');
// 	printf("Original strchr:%s$\nCustom strchr:%s$\n", ptr5, ptr6);
// }
