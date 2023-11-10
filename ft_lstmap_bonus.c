/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:31:42 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/10 18:20:28 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*newlist;
	t_list	*newnode;
	void *tmp_cont;

	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	current = lst;
	while (current != NULL)
	{
		tmp_cont = f(current->content);
		newnode = ft_lstnew(tmp_cont);
		if (!newnode || !tmp_cont)
		{
			free(tmp_cont);
			free(newnode);
			ft_lstclear(&newlist, del);
		}
		else
			ft_lstadd_back(&newlist, newnode);
		current = current->next;
	}
	return (newlist);
}
