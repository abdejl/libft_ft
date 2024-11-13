/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:08:01 by abjellal          #+#    #+#             */
/*   Updated: 2024/11/13 10:39:45 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			tmp;
	unsigned char	*dst;
	unsigned char	*source;

	i = 0;
	tmp = 1;
	dst = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (!dst && !source)
		return (NULL);
	if (dst > source)
	{
		tmp = -1;
		dst += n - 1;
		source += n - 1;
	}
	while (i < n)
	{
		*dst = *source;
		dst += tmp;
		source += tmp;
		i++;
	}
	return (dst);
}
/*int main()
{
	char src[] = "hello world";
	char dest[10] = "alii";
	size_t n = 4;
	ft_memmove(dest + 4, src, n);
	printf("%s\n", dest);
}*/