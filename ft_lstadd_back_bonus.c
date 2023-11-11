/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:25:41 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/11 16:25:01 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*llast;

	if (!lst || !new)
		return ;
	llast = ft_lstlast(*lst);
	if (llast == NULL)
		*lst = new;
	else
		llast->next = new;
}


// #include <stdio.h>


// void print_list(t_list *lst)
// {
//     while (lst != NULL)
//     {
//         printf("%d ", *((int *)lst->content)); 
//         lst = lst->next;
//     }
//     printf("\n");
// }

// int main(void)
// {
//     t_list *node1 = (t_list *)malloc(sizeof(t_list));
//     node1->content = (int *)malloc(sizeof(int));
//     *((int *)node1->content) = 42;
//     node1->next = NULL;

//     t_list *node2 = (t_list *)malloc(sizeof(t_list));
//     node2->content = (int *)malloc(sizeof(int));
//     *((int *)node2->content) = 10;
//     node2->next = NULL;

//     t_list *node3 = (t_list *)malloc(sizeof(t_list));
//     node3->content = (int *)malloc(sizeof(int));
//     *((int *)node3->content) = 99;
//     node3->next = NULL;

    
//     t_list *list = NULL;

//     ft_lstadd_back(&list, node1);
//     ft_lstadd_back(&list, node2);
//     ft_lstadd_back(&list, node3);

//     print_list(list);

//     while (list != NULL)
//     {
//         t_list *temp = list;
//         list = list->next;
//         free(temp->content);
//         free(temp);
//     }

//     return 0;
// }