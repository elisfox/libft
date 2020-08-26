/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojoseph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 22:17:01 by jojoseph          #+#    #+#             */
/*   Updated: 2019/09/20 00:07:08 by jojoseph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	k;

	a = (unsigned char*)s;
	k = (unsigned char)c;
	while (n--)
	{
		if (*a == k)
			return ((void *)(a));
		a++;
	}
	return (0);
}
