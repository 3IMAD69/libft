/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:55:14 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/01 18:25:08 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big,	const char *little, size_t len)
{
    size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
	{
		return ((char *)big);
	}
	while (little[j] != '\0')
	{
		j++;
	}
	while (i < len)
	{
		if (big[i] == little[0]
			&& ft_strncmp(&big[i], &little[0], j - 1) == 0)
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main() {
    const char *haystack = "imad dhaimy";
    const char *needle = "dhaimy";
    size_t len = 13;

    char *result = ft_strnstr(haystack, needle, len);

    if (result) {
        printf("Needle found at position: %ld\n", result - haystack);
        printf("%s",result);
    } else {
        printf("Needle not found.\n");
    }

    return 0;
}