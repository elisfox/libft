/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojoseph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 22:36:37 by jojoseph          #+#    #+#             */
/*   Updated: 2019/09/23 18:09:40 by jojoseph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hst, const char *ndl, size_t n)
{
	size_t	size;

	size = ft_strlen(ndl);
	if (!*ndl)
		return ((char *)hst);
	while (*hst && n-- >= size)
	{
		if (*hst == *ndl && ft_memcmp(hst, ndl, size) == 0)
			return ((char *)hst);
		hst++;
	}
	return (NULL);
}
