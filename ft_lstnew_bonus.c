/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:44:49 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/04 14:47:08 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	if (!content)
		return (NULL);
	newnode = (t_list *)malloc(sizeof(t_list));
	if (newnode)
	{
		newnode->content = content;
		newnode->next = NULL;
	}
	else
		return (NULL);
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