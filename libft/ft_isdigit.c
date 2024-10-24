#include "libft.h"

int	ft_isdigit(int digit)
{
	if (digit >= 48 && digit <= 57)
		return (1);
	return (0);
}
