/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:41:24 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/02 17:29:50 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int check_if_set(char c, char const *set)
{
    while(*set != '\0')
    {
        if(*set == c)
            return (1);
        set++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int size;
    int i;
    char *trim;
    
    size = 0;
    i = 0;
    while(s1[i])
    {
        if (check_if_set(s1[i],set) == 1)
            size++;
        i++;   
    }
    trim = (char *)malloc((ft_strlen(s1) - size + 1) * sizeof(char));
    if (!trim)
        return (0);
    i = 0;
    while(*s1)
    {
        if (check_if_set(*s1,set) == 0)
            trim[i++] = *s1;
        s1++;
    }
    trim[i] = '\0'; 
    return (trim);
}

int main()
{
    char * str = ft_strtrim("abcdba","acb");
    printf("%s\n",str);
}
