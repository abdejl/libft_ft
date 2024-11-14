/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:06:57 by abjellal          #+#    #+#             */
/*   Updated: 2024/11/09 12:23:14 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int b, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = a;
	while (i < n)
	{
		str[i] = b;
		i++;
	}
	return (a);
}
/*int main()
{
	char str[] = "hello";
    int b = 'x';
    size_t n = 5;

    ft_memset(str, b, n);
    printf("%s\n", str); 
}*/