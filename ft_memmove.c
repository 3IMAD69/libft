/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:25:39 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/01 17:32:38 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*destination;
	char	*source;

	destination = (char *)dest;
	source = (char *)src;
	if (source < destination)
	{
		while (n > 0)
		{
			destination[n - 1] = source[n - 1];
			n--;
		}
	}
	else
	{
		while (n-- > 0)
			*destination++ = *source++;
	}
	return (dest);
}
