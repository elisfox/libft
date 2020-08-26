/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojoseph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 22:19:11 by jojoseph          #+#    #+#             */
/*   Updated: 2019/09/22 23:22:29 by jojoseph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	j;
	size_t	i;
	size_t	s;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	j = 0;
	i = 0;
	if (size <= d)
		return (size + s);
	else
		j = d;
	while (src[i] != '\0' && size > (d + 1))
	{
		dst[j] = src[i];
		j++;
		i++;
		size--;
	}
	dst[j] = '\0';
	return (d + s);
}
