/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:11:26 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/02 21:23:20 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


char **ft_split(char const *s, char c)
{
    char *tmp_str;
    char **arr;
    int i;
    int j;
    int size;
    
    i = 0;
    size  = 0;
    tmp_str = ft_strdup(s);
    while (tmp_str[i] != '\0')
    {
        if ((tmp_str[i] != c) && (tmp_str[i + 1] == c))
            tmp_str[i + 1] = '\0';
        i++;
    }
    i = 0;
    j = 0;
    while(s[i] != '\0')
    {
        if ((s[i] == c) && (s[i + 1] != c))
            *arr[j++] = &tmp_str[i];
        i++;
    }
    printf
}