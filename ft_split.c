/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:11:26 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/03 12:01:28 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **wrtie_to_arr(char const *s,char **arr,char *tmp_str)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    if (s[0] != '\0')
        arr[j++] = ft_strdup(&tmp_str[0]);
    while (s[i] != '\0')
    {
        if ((tmp_str[i] == '\0') && (tmp_str[i + 1] != '\0'))
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
        if ((tmp_str[i] != c) && ((tmp_str[i + 1] == c) || (tmp_str[i + 1] == '\0')))
        {
            size++;
            tmp_str[i + 1] = '\0';
        }
        i++;
    }
    arr = (char **)malloc(sizeof(char *) * (size + 1));
    return(wrtie_to_arr(s,arr,tmp_str));
}

//#include <stdio.h>

// int main()
// {
//     char **strings;
//     int i  = 0;
//     strings = ft_split("Shadow Wizard Money Gang",' ');
//      while (strings[i] != NULL) {
//         printf("%s\n", strings[i]);
//         i++;
//     }
//     return 0;
// }