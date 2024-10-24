#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			tmp;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	tmp = 1;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		tmp = -1;
		d += n - 1;
		s += n - 1;
	}
	while (i < n)
	{
		*d = *s;
		d += tmp;
		s += tmp;
		i++;
	}
	return (dest);
}
int main()
{
	char src[] = "hello world";
	char dest[10] = "";
	size_t n = 4;
	ft_memmove(dest, src, n);
	printf("%s", dest);
}
