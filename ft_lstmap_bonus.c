/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:31:42 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/12 10:16:44 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*newlist;
	t_list	*newnode;
	void	*tmp_cont;

	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	current = lst;
	while (current != NULL)
	{
		tmp_cont = f(current->content);
		newnode = ft_lstnew(tmp_cont);
		if (!newnode || !tmp_cont)
		{
			free(tmp_cont);
			free(newnode);
			ft_lstclear(&newlist, del);
		}
		else
			ft_lstadd_back(&newlist, newnode);
		current = current->next;
	}
	return (newlist);
}

// #include <stdio.h>

// void	del(void *content)
// {
// 	free (content);
// }

// void	*f(void	*content)
// {
// 	return ((void *) ft_strlen(content));
// }

// int main()
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*node4;

//     node1 = (t_list *) malloc (sizeof(t_list));
//     node2 = (t_list *) malloc (sizeof(t_list));
//     node3 = (t_list *) malloc (sizeof(t_list));
//     node4 = (t_list *) malloc (sizeof(t_list));

//     node1->content = NULL; // Initialize content pointers
//     node2->content = NULL;
//     node3->content = NULL;
//     node4->content = NULL;

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;
//     node4->next = NULL;

//     node1->content = ft_strdup("ana node 1");
//     node2->content = ft_strdup("ana ghankun node 2");
//     node3->content = ft_strdup("idan ana node 3");
//     node4->content = ft_strdup("kys");

//     t_list *r = ft_lstmap(node1, f, del);

//     printf("%d\n", (int) r->content);
//     t_list *r1 = r->next;
//     printf("%d\n", (int) r1->content);
//     t_list *r2 = r1->next;
//     printf("%d\n", (int) r2->content);
//     t_list *r3 = r2->next;
//     printf("%d\n", (int) r3->content);

//     free(node1);
//     free(node2);
//     free(node3);
//     free(node4);

//     free(r);
//     free(r1);
//     free(r2);
//     free(r3);
// }