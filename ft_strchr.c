/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:46:02 by idhaimy           #+#    #+#             */
/*   Updated: 2023/11/04 19:51:51 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	while (*s)
	{
		if (*s == character)
			return ((char *)s);
		s++;
	}
	if (*s == character)
		return ((char *)s);
	return (0);
}
