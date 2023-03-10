#include <stddef.h>

int	ft_srtncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char) s1[i] > (unsigned char) s2[i])
			return (1);
		else if ((unsigned char) s1[i] < (unsigned char) s2[i])
			return (-1);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	s1[20] = "ABCDEFG";
// 	char	s2[20] = "ABCDEFG";
// 	long long unsigned int	n = 7;
// 	printf("String 1:%s\nString 2:%s\nn:%lld\nstrncmp:%d\nft_strncmp:%d\n",
// 		s1, s2, n, strncmp(s1, s2, n), ft_srtncmp(s1, s2, n));

// 	strcpy(s1, "ABCDEFGH");
// 	strcpy(s2, "ABCDEFG");
// 	n = 7;
// 	printf("String 1:%s\nString 2:%s\nn:%lld\nstrncmp:%d\nft_strncmp:%d\n",
// 		s1, s2, n, strncmp(s1, s2, n), ft_srtncmp(s1, s2, n));

// 	strcpy(s1, "ABCDEFGH");
// 	strcpy(s2, "ABCDEFG");
// 	n = 8;
// 	printf("String 1:%s\nString 2:%s\nn:%lld\nstrncmp:%d\nft_strncmp:%d\n",
// 		s1, s2, n, strncmp(s1, s2, n), ft_srtncmp(s1, s2, n));

// 	strcpy(s1, "ABCDEFG");
// 	strcpy(s2, "ABCDEFGH");
// 	n = 8;
// 	printf("String 1:%s\nString 2:%s\nn:%lld\nstrncmp:%d\nft_strncmp:%d\n",
// 		s1, s2, n, strncmp(s1, s2, n), ft_srtncmp(s1, s2, n));

// 	strcpy(s1, "ABCDEFGH");
// 	strcpy(s2, "ABCDEFGA");
// 	n = 8;
// 	printf("String 1:%s\nString 2:%s\nn:%lld\nstrncmp:%d\nft_strncmp:%d\n",
// 		s1, s2, n, strncmp(s1, s2, n), ft_srtncmp(s1, s2, n));

// 	strcpy(s1, "ABCDEFGA");
// 	strcpy(s2, "ABCDEFGH");
// 	n = 8;
// 	printf("String 1:%s\nString 2:%s\nn:%lld\nstrncmp:%d\nft_strncmp:%d\n",
// 		s1, s2, n, strncmp(s1, s2, n), ft_srtncmp(s1, s2, n));

// 	strcpy(s1, "");
// 	strcpy(s2, "ABCDEFG");
// 	n = 0;
// 	printf("String 1:%s\nString 2:%s\nn:%lld\nstrncmp:%d\nft_strncmp:%d\n",
// 		s1, s2, n, strncmp(s1, s2, n), ft_srtncmp(s1, s2, n));

// 	strcpy(s1, "ABCDEFG");
// 	strcpy(s2, "");
// 	n = 3;
// 	printf("String 1:%s\nString 2:%s\nn:%lld\nstrncmp:%d\nft_strncmp:%d\n",
// 		s1, s2, n, strncmp(s1, s2, n), ft_srtncmp(s1, s2, n));

// 	return (0);
// }