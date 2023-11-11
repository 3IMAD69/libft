/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:56:13 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/11 16:24:26 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>

// void print_list(t_list *lst)
// {
//     while (lst != NULL)
//     {
//         printf("%d ", *(int *)(lst->content)); 
//         lst = lst->next;
//     }
//     printf("\n");
// }

// int main(void)
// {
//     t_list *node1 = (t_list *)malloc(sizeof(t_list));
//     node1->content = malloc(sizeof(int));
//     *(int *)(node1->content) = 42;
//     node1->next = NULL;

//     t_list *node2 = (t_list *)malloc(sizeof(t_list));
//     node2->content = malloc(sizeof(int));
//     *(int *)(node2->content) = 7;
//     node2->next = NULL;

//     t_list *node3 = (t_list *)malloc(sizeof(t_list));
//     node3->content = malloc(sizeof(int));
//     *(int *)(node3->content) = 99;
//     node3->next = NULL;

//     t_list *list = NULL;

//     ft_lstadd_front(&list, node1);
//     ft_lstadd_front(&list, node2);
//     ft_lstadd_front(&list, node3);

    
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