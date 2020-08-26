/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojoseph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:25:30 by jojoseph          #+#    #+#             */
/*   Updated: 2019/09/22 23:52:52 by jojoseph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	k;

	i = 0;
	a = (unsigned char*)dst;
	b = (unsigned char*)src;
	k = (unsigned char)c;
	while (i < n)
	{
		a[i] = b[i];
		if (b[i] == k)
			return ((void *)(dst + i + 1));
		i++;
	}
	return (NULL);
}
