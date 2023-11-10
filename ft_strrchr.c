/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:08:22 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/04 20:02:12 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*tmp;
	unsigned char	character;

	tmp = NULL;
	character = (unsigned char)c;
	while (*s)
	{
		if (*s == character)
			tmp = (char *)s;
		s++;
	}
	if (*s == character)
		return ((char *)s);
	return (tmp);
}
