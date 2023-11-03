/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:31:47 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/03 22:00:51 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list *tmp;
    int count ;
    
    count = 0;
    if(lst == NULL)
        return (0);
    tmp = lst;
    while (tmp->next != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return (count);
}
