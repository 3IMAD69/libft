/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:36:33 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/06 15:21:35 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *current;
    t_list *next;
    if (lst == NULL)
        return ;
    current = *lst;
    while (current != NULL)
    {
        next = current->next;
        ft_lstdelone(current,del);
        current = next;
    }
    *lst = NULL;
}
// void del(void *content) {
//     // Example content deletion function, modify as needed
//     free(content);
// }

// int main() {
//     // Create a linked list with some content (e.g., integers)
//     t_list *head = (t_list *)malloc(sizeof(t_list));
//     head->content = malloc(sizeof(int));
//     *(int *)(head->content) = 42;

//     t_list *second = (t_list *)malloc(sizeof(t_list));
//     second->content = malloc(sizeof(int));
//     *(int *)(second->content) = 55;

//     head->next = second;
//     second->next = NULL;

//     // Clear the list and set the head pointer to NULL
//     ft_lstclear(&head, del);

//     // Verify that the list is cleared (head is NULL)
//     if (head == NULL) {
//         printf("The list has been cleared.\n");
//     } else {
//         printf("The list is not cleared.\n");
//     }

//     return 0;
// }