/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojoseph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:31:14 by jojoseph          #+#    #+#             */
/*   Updated: 2019/09/21 19:57:32 by jojoseph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	a = (unsigned char*)dst;
	b = (unsigned char*)src;
	if (b < a)
	{
		while (len && ++i <= len)
			a[len - i] = b[len - i];
	}
	else
	{
		while (len > 0)
		{
			a[i] = b[i];
			i++;
			len--;
		}
	}
	return (a);
}
