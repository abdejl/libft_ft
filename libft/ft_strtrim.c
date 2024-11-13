/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:23:33 by abjellal          #+#    #+#             */
/*   Updated: 2024/11/10 10:14:08 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int ch)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

static int	ft_get_trim_start(const char *s1, const char *set)
{
	int	beg;

	beg = 0;
	while (s1[beg] && ft_strchr(set, s1[beg]))
		beg++;
	return (beg);
}

static int	ft_get_trim_end(const char *s1, const char *set)
{
	int	end;

	end = ft_strlen(s1) - 1;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		beg;
	int		end;
	int		len;
	int		i;
	char	*ptr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	beg = ft_get_trim_start(s1, set);
	end = ft_get_trim_end(s1, set);
	len = 0;
	if (end >= beg)
		len = end - beg + 1;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s1[beg + i];
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}

/*int main()
{
	char s1[] = "hello";
	char set[] = "heo";
	printf("%s", ft_strtrim(s1, set));
}*/