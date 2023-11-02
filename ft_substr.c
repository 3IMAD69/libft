/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:40:20 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/02 15:40:43 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    //int size;
    char *str;

   // size = ft_strlen(s);
    // if ((size - start) < len)
    //     return (0);
    str = (char *)malloc((len + 1) * sizeof(char));
    if(!str)
        return (0);
    ft_strlcpy(str,(s+start),len + 1);
    return (str);
}

// int main()
// {
//     const char *originalString = "1";
//     int startPosition = 42;
//     int substringLength = 42000000;
//     char *subString = ft_substr(originalString, startPosition, substringLength);
    
//     if (subString) {
//         printf("Original string: %s\n", originalString);
//         printf("Starting position: %d\n", startPosition);
//         printf("Substring length: %d\n", substringLength);
//         printf("Substring: %s\n", subString);
//         free(subString);
//     } else {
//         printf("Invalid starting position or memory allocation failed.\n");
//     }
// }
