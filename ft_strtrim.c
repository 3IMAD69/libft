/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:41:24 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/05 18:30:17 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

int get_str_size(char *str,char const *set)
{
    int i;
    int j;
    int size;
    
    i = 0;
    size = 0;
    j = ft_strlen(str) - 1;
    while(check_if_set(str[i],set) == 1 && str[i] != '\0')
    {
        size++;
        i++;
    }
    while(check_if_set(str[j],set) == 1)
    {
        str[j] = '\0';
        size++;
        j--;
    }
    return (size);
}
char *ft_strtrim(char const *s1, char const *set)
{
    char *tmp_str; 
    char *trim ;
    int i;
    int j;
    
    i = 0;
    j = 0;
    tmp_str = ft_strdup(s1);
    trim = (char *)malloc((ft_strlen(s1) - get_str_size(tmp_str,set) + 1) * sizeof(char));
    if (!trim)
        return (0);
    while(check_if_set(tmp_str[i],set) == 1)
        i++;
    while(tmp_str[i] != '\0')
    {
        trim[j] = tmp_str[i];
        j++;
        i++;
    }
    trim[j] = '\0';
    return (trim);
}
