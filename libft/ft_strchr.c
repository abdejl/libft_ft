/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:57:28 by abjellal          #+#    #+#             */
/*   Updated: 2024/10/28 14:42:38 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int ch)
{
	int	i;

	i = 0;
	if (ch == '\0')
	{
		return ((char *)(s + i));
	}
	while (s[i])
	{
		if (s[i] == ch)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	return (NULL);
}
/*int main()
{
    char str[] = "lalo";
    char ch = 'a';
    printf("%s\n", ft_strchr(str, ch));
}*/
