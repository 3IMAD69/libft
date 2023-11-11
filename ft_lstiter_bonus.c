/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:46:35 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/11 16:42:59 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst || !f)
		return ;
	current = lst;
	while (current != NULL)
	{
		f(current->content);
		current = current->next;
	}
}

// #include <stdio.h>

// void iterate_and_print(void *content)
// {
//     printf("%d ", *(int *)content);
// }

// int main(void)
// {
//     t_list *node1 = (t_list *)malloc(sizeof(t_list));
//     node1->content = malloc(sizeof(int));
//     *(int *)(node1->content) = 42;
//     node1->next = NULL;

//     t_list *node2 = (t_list *)malloc(sizeof(t_list));
//     node2->content = malloc(sizeof(int));
//     *(int *)(node2->content) = 99;
//     node2->next = NULL;

//     t_list *head = node1;
//     node1->next = node2;

//     // Test the ft_lstiter function
//     ft_lstiter(head, iterate_and_print);

//     return 0;
// }