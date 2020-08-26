/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojoseph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 21:06:52 by jojoseph          #+#    #+#             */
/*   Updated: 2019/09/19 21:34:48 by jojoseph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	m;

	i = 0;
	a = (unsigned char*)b;
	m = (unsigned char)c;
	if (len == 0)
		return (b);
	while (len > 0)
	{
		a[i] = m;
		i++;
		len--;
	}
	return (a);
}
