#include "libft.h"

void	*ft_memset(void *a, int b, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = a;
	while (i < n)
	{
		str[i] = b;
		i++;
	}
	return (a);
}
