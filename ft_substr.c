/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:40:20 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/05 17:15:54 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*str;

	size = ft_strlen(s);
	if (start > size)
	{
		str = (char *)malloc(1 * sizeof(char));
		if (!str)
			return (0);
		str[0] = '\0';
		return (str);
	}
	if ((size - start) < len)
		len = (size - start);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, (s + start), len + 1);
	return (str);
}
