/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojoseph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 23:57:38 by jojoseph          #+#    #+#             */
/*   Updated: 2019/09/20 16:22:43 by jojoseph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	k;

	i = 0;
	k = (unsigned char)c;
	while (s[i] != k)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((void *)(s + i));
}
