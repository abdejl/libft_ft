#include "libft.h"

int	ft_isalpha(int alph)
{
	if ((alph >= 65 && alph <= 90) || (alph >= 97 && alph <= 122))
		return (1);
	return (0);
}
