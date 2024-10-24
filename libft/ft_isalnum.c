#include "libft.h"

int	ft_isalnum(int num)
{
	if ((num >= 48 && num <= 57) || (num >= 65 && num <= 90) || (num >= 97 && num <= 122))
		return (1);
	return (0);
}
