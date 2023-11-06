/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:21:07 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/06 19:06:50 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    
    if (nmemb > (size_t)(-1) / size)
        return (0);
        
    ptr = malloc(nmemb * size);
    
    if(!ptr)
        return (0);
    else
        ft_bzero(ptr,nmemb * size);
    return (ptr);
}