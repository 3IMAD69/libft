/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:01:34 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/01 10:31:08 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    if (dest)
        return (NULL);
    char *destination = (char *) dest;
    const char *source = (const char *)src;
    while(n-- > 0)
        *destination++ = *source++;
    return dest;
}