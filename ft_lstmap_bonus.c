/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:31:42 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/06 19:50:21 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*newlist;
	t_list	*newnode;

	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	current = lst;
	while (current != NULL)
	{
		newnode = ft_lstnew(f(current->content));
		if (!newnode)
			ft_lstclear(&newlist, del);
		else
			ft_lstadd_back(&newlist, newnode);
		current = current->next;
	}
	return (newlist);
}
