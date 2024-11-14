/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:32:36 by abjellal          #+#    #+#             */
/*   Updated: 2024/11/11 12:15:09 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*ptr;
	size_t	total;
	size_t	i;

	i = 0;
	total = nitems * size;
	if (nitems != 0 && total / nitems != size)
		return (NULL);
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/*int main()
{
    size_t nitems =5 ;
    size_t size = sizeof(int);
    char *ptr = ft_calloc(nitems, size);

    size_t i = 0;
    while (i < nitems)
    {
        printf("%d\n", ptr[i]);
        i++;
    }
    free(ptr);
}*/