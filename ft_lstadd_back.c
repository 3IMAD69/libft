/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:25:41 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/05 20:16:27 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *llast;

    if (new)
    {
        llast = ft_lstlast(*lst);
        if(llast != NULL)
            return;
        llast->next = new;
        new->next = NULL;   
    }
}