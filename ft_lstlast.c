/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:09:02 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/03 22:22:05 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *tmp;

    tmp = lst;
    while (tmp->next != NULL)
        tmp = tmp->next;
    return (tmp);
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
//      // Get the last node
//     t_list *lastNode = ft_lstlast(head);
//     if (lastNode) {
//         printf("Data in the last node: %d\n", *(int *)(lastNode->content));
//     } else {
//         printf("The list is empty.\n");
//     }
// }

