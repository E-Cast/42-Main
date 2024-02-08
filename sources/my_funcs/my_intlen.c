#include "libft.h"

int	my_intlen(int num, int base)
{
	int	len;

	len = 1;
	num /= base;
	while (num != 0)
	{
		num /= base;
		len++;
	}
	return (len);
}
