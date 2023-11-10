/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:09:02 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/06 12:53:26 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

// #include <stdio.h>
// int main()
// {
//     t_list *l = NULL;

//     ft_lstadd_back(&l, ft_lstnew((void*)1));
//     printf("%d\n",ft_lstlast(l)->content == (void*)1);
// }