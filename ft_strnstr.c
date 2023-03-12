#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*pos;


	if (!needle)
		return ((char *) haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{	
			pos = (char *) &haystack[i];
			while (haystack[i] == needle[j])
			{
				if (!needle[j])
					return (pos);
				i++;
				j++;
			}
		}
		else
			i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	str[] = "Hello W World!";
	const char	substr[] = "World";
	// printf("String:%s\nSubstring:%s\nstrnstr:%s\nft_strnstr:%s\n", 
	// 	str, substr, strnstr(str, substr, 14), ft_strnstr(str, substr, 14));
	printf("String:%s\nSubstring:%s\nstrnstr:%d\nft_strnstr:%s\n", 
    str, substr, strnstr(str, substr, 14), ft_strnstr(str, substr, 14));
}