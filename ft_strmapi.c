/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:15:23 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/03 15:31:37 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *newstr;
    unsigned int i;

    i = 0;
    newstr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    while (s[i] != '\0')
    {
        newstr[i] = f(i,s[i]);
        i++;
    }
    return (newstr);
}