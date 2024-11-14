/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:10:29 by abjellal          #+#    #+#             */
/*   Updated: 2024/11/12 15:13:54 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*next;

	if (lst == NULL)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		next = tmp->next;
		if (del != NULL)
			del(tmp->content);
		free(tmp);
		tmp = next;
	}
	*lst = NULL;
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	new_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

/*void del_content(void *content)
{
    free(content);
}

void *transform_content(void *content)
{
    int *new_value = malloc(sizeof(int));
    if (!new_value)
        return NULL;
    *new_value = *(int *)content * 2;
    return new_value;
}

void print_list(t_list *lst)
{
    while (lst) {
        printf("%d -> ", *(int *)(lst->content));
        lst = lst->next;
    }
    printf("NULL\n");
}

int main()
{
    int *val;
    t_list *lst = NULL;
    t_list *mapped_lst;
    int i = 0;
    while (i <= 5)
	{
        val = malloc(sizeof(int));
        *val = i;
        ft_lstadd_back(&lst, ft_lstnew(val));
        i++;
    }

    printf("original list:\n");
    print_list(lst);
    mapped_lst = ft_lstmap(lst, transform_content, del_content);

    printf("mapped list:\n");
    print_list(mapped_lst);

    ft_lstclear(&lst, del_content);
    ft_lstclear(&mapped_lst, del_content);
}*/