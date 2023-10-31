/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhaimy <idhaimy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:13:18 by idhaimy           #+#    #+#             */
/*   Updated: 2023/10/31 12:26:56 by idhaimy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isalpha.c"
#include "ft_isdigit.c"

int ft_isalnum(int c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
}