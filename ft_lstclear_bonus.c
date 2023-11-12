/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:36:33 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/12 10:01:06 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}

/*#include <stdio.h>
void	del(void *content) {
	free(content);
}
void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%d ", *(int *)(lst->content));
		lst = lst->next;
	}
	printf("\n");
}
int	main(void) {

	t_list *head = (t_list *)malloc(sizeof(t_list));
	head->content = malloc(sizeof(int));
	*(int *)(head->content) = 42;

	t_list *second = (t_list *)malloc(sizeof(t_list));
	second->content = malloc(sizeof(int));
	*(int *)(second->content) = 55;

	head->next = second;
	second->next = NULL;

	//before
	print_list(head);

	ft_lstclear(&head, del);

	//after
	print_list(head);
	// Verify that the list is cleared (head is NULL)
	if (head == NULL) {
		printf("The list has been cleared.\n");
	} else {
		printf("The list is not cleared.\n");
	}

	return (0);
}*/