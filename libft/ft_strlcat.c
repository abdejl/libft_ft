/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:48:04 by abjellal          #+#    #+#             */
/*   Updated: 2024/11/11 20:33:51 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	j = dest_len;
	i = 0;
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	while (src[i] != '\0' && j + i < size - 1)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[i + j] = '\0';
	return (src_len + dest_len);
}
/*int main()
{
	char src[] = "hello";
	char dest[] = "hi";
	size_t n = 8;
	printf("%d\n", ft_strlcat(dest, src, n));
	printf("%s", dest);
}*/
