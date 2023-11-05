/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:11:26 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/05 18:05:57 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **wrtie_to_arr(char const *s,char **arr,char *tmp_str,char c)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    if (s[0] != c)
        arr[j++] = ft_strdup(&tmp_str[0]);
    while (s[i] != '\0')
    {
        if ((s[i] == c) && (s[i + 1] != c) && (s[i + 1] != '\0'))
            arr[j++] = ft_strdup(&tmp_str[i + 1]);
        i++;
    }
    arr[j] = 0;
    return (arr);
}

char **ft_split(char const *s, char c)
{
    char *tmp_str;
    char **arr;
    int i;
    int size;
    
    i = 0;
    size  = 0;
    tmp_str = ft_strdup(s);
    while (s[i] != '\0')
    {
        if ((s[i] != c) && ((s[i + 1] == c) || (s[i + 1] == '\0')))
        {
            size++;
            tmp_str[i + 1] = '\0';
        }
        i++;
    }
    arr = (char **)malloc(sizeof(char *) * (size + 1));
    if (size == 0)
        arr[0] = '\0';
    else
        arr = wrtie_to_arr(s,arr,tmp_str,c);
    return (arr);
}

// #include <stdio.h>

// int main()
// {
//     char **strings;
//     int i  = 0;
//     strings = ft_split("  tripouille  42  ",' ');
//     //printf("%d\n",strings[0]);
//      while (strings[i] != NULL) {
//         printf("%s\n", strings[i]);
//         i++;
//     }
//     return 0;
// }