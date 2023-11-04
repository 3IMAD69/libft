/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:31:42 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/04 14:59:18 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *current;
    t_list *new_list;
    t_list *new_node;
    void *new_content;

    new_list = NULL;
    current = lst;
    while (current->next != NULL)
    {
        new_content = f(current->content); 
        if(new_content)
        {
            new_node = ft_lstnew(current->content);
            if (new_node)
                ft_lstadd_back(&new_list,new_node);
            else
            {
                del(new_content);
                ft_lstclear(&new_list,del);
                //return (NULL);
            }
        }
        current = current->next;
    }
}