/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:20:05 by idhaimy           #+#    #+#             */
/*   Updated: 2023/10/31 21:26:18 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t  strlcpy(char *dst, const char *src, size_t size)
{
    	unsigned int	i;
	int				dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	while (src[i] != '\0' && i < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (size);
}

#include <stdio.h>
int main()
{
    char src[] = "imad dhaimy";
    char dst[20] = "my name is ";
    strlcpy(dst,src,12);
    printf("src : %s\n",src);
    printf("dst : %s\n",dst);
    
}