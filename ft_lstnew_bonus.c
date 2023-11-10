/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:44:49 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/10 17:52:02 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (newnode)
	{
		newnode->content = content;
		newnode->next = NULL;
	}
	return (newnode);
}

// #include <stdio.h>

// int main()
// {
//     int data = 42; // Example data
//     t_list *node = ft_lstnew(&data);

//     if (node)
//     {
//         printf("Data in the node: %d\n", *(int *)node->content);
//         free(node);
//     }

//     return (0);
// }