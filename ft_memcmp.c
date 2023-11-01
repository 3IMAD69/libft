/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:18:01 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/01 15:49:22 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *str1 = (const unsigned char *)s1;
    const unsigned char *str2= (const unsigned char *)s2;
    unsigned int i;

    i = 0;
    if (n == 0)
        return (0);
    while(str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i] && i < n -1)
        i++;
    return (str1[i] - str2[i]);
}