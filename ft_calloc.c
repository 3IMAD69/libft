/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:21:07 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/01 21:55:01 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdint.h>
#include <limits.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    
    if (nmemb == 0 || size == 0)
        return (0);
    
    if (nmemb >= SIZE_MAX / size)
    {
        return (0);   
    }
    ptr = malloc(nmemb * size);
    
    if(!ptr)
    {
        printf("error malloc");
        return (0);
    }
    else
    {
        printf("malloc khdama");
        ft_bzero(ptr,nmemb * size);
    }
    return (ptr);
}

int main()
{
    ft_calloc(SIZE_MAX,SIZE_MAX);
  
}