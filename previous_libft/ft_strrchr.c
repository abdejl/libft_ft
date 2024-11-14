/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:03:37 by abjellal          #+#    #+#             */
/*   Updated: 2024/10/28 15:55:37 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int ch)
{
	int	i;

	i = ft_strlen(s) - 1;
	if (ch == '\0')
	{
		return ((char *)(s + i + 1));
	}
	while (i >= 0)
	{
		if (s[i] == ch)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}
/*int main()
{
    char str[] = "heella";
    char ch = '0';
    printf("%s", ft_strrchr(str, ch));
}*/
