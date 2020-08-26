/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojoseph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 00:17:37 by jojoseph          #+#    #+#             */
/*   Updated: 2019/09/20 17:18:50 by jojoseph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (ft_strchr(s, c) == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		i++;
	while (s[i] != c)
		i--;
	return ((char *)s + i);
}
