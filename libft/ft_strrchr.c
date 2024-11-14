/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:03:37 by abjellal          #+#    #+#             */
/*   Updated: 2024/11/14 11:46:01 by abjellal         ###   ########.fr       */
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
	if ((unsigned char)ch == '\0')
	{
		return ((char *)(s + i));
	}
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)ch)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}
/*int main()
{
    char str[] = "heello";
    char ch = 'a';
    printf("%s", ft_strrchr(str, ch));
}*/
