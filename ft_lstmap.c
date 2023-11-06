/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:31:42 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/06 19:50:21 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *current;
    t_list *newlist;
    t_list *newnode;

    newlist = NULL;
    current = lst;
    while (current != NULL)
    {
        newnode = ft_lstnew(f(current->content));
        if (!newnode)
            ft_lstdelone(newnode,del);
        else
            ft_lstadd_back(&newlist,newnode);
        current = current->next;
    }
    return (newlist);
}

// void * addOne(void * p) {void * r = malloc(sizeof(int)); *(int*)r = *(int*)p + 1; return (r);}
// int main(void)
// {

// 	int tab[] = {0, 1, 2, 3};
// 	t_list * l =  ft_lstnew(tab);
// 	for (int i = 1; i < 4; ++i)
// 		ft_lstadd_back(&l, ft_lstnew(tab + i));
// 	t_list * m = ft_lstmap(l, addOne, free);
// 	t_list * tmp = l;
// 	/* 1 2 3 4 */ for (int i = 0; i < 4; ++i)
// 	{
// 		printf("%d\n",*(int*)tmp->content == i);
// 		tmp = (t_list *)tmp->next;
// 	}
// 	tmp = m;
// 	/* 5 6 7 8 */ for (int i = 0; i < 4; ++i)
// 	{
// 		printf("%d\n",*(int*)tmp->content == i + 1);
// 		tmp = (t_list *)tmp->next;
// 	}
// 	//freeList(l); ft_lstclear(&m, free); showLeaks();
// 	write(1, "\n", 1);
// 	return (0);
// }
