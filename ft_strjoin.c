/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:41:58 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/02 16:06:20 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
   int size1;
   int size2;
   char *newstr;
   
   size1 = ft_strlen(s1);
   size2 = ft_strlen(s2);
   newstr = (char *)malloc((size1 + size2 + 1) * sizeof(char));
   if (!newstr)
    return (0);
   ft_memcpy(newstr,s1,size1);
   ft_memcpy(newstr+size1,s2,size2);
   newstr[size1 + size2] = '\0';
   return (newstr);
}