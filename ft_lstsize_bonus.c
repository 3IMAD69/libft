/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:31:47 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/11 16:47:07 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		count;

	count = 0;
	if (lst == NULL)
		return (0);
	tmp = lst;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

// #include <stdio.h>
// int main()
// {
//     t_list *head = NULL;
//     int i;
//     for (i = 0 ; i <= 82; i++)
//     {
//         t_list *newnode = ft_lstnew(&i);
//         ft_lstadd_front(&head,newnode);
//     }
//     // Call ft_lstsize to get the size of the list
//     int size = ft_lstsize(head);
//     printf("Size of the linked list: %d\n", size);
// }
