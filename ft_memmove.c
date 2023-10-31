/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:25:39 by idhaimy           #+#    #+#             */
/*   Updated: 2023/10/31 18:53:21 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *destination = (char *)dest;
    char *source = (char *)src;
    char tmp[n];
    int i;
    
    i = 0;
    while(source[i])
    {
        tmp[i] = source[i];
        i++;
    }
    i = 0;
    while(n-- > 0)
    {
        destination[i] = tmp[i];
        i++;
    }
    
    return dest;
}