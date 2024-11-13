/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:08:45 by abjellal          #+#    #+#             */
/*   Updated: 2024/11/10 11:57:45 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_malloc_fail(char **all_ptrs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free (all_ptrs[i]);
		i++;
	}
	free (all_ptrs);
}

static int	ft_next_word(const char *s, char c, int *i)
{
	int	len;

	len = 0;
	while (s[*i] == c)
		(*i)++;
	while (s[*i + len] && s[*i + len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		word_len;
	int		s_len;
	char	**all_ptrs;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_count_words(s, c);
	all_ptrs = malloc((s_len + 1) * sizeof(char *));
	if (!all_ptrs)
		return (NULL);
	while (j < s_len)
	{
		word_len = ft_next_word(s, c, &i);
		all_ptrs[j] = malloc((word_len + 1) * sizeof(char));
		if (!all_ptrs[j])
			return (ft_malloc_fail(all_ptrs, j), NULL);
		ft_strncpy(all_ptrs[j++], (char *)&s[i], word_len);
		i += word_len;
	}
	all_ptrs[j] = NULL;
	return (all_ptrs);
}
/*int main()
{
	char str[] = "";
	char c = ' ';
	int i;
	i = 0;
	char **result = ft_split(str, c);
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
}*/