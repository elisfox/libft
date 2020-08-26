/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojoseph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 21:45:46 by jojoseph          #+#    #+#             */
/*   Updated: 2019/09/23 00:03:19 by jojoseph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			m;
	unsigned char	*s3;
	unsigned char	*s4;

	i = 0;
	m = 0;
	s3 = (unsigned char*)s1;
	s4 = (unsigned char*)s2;
	while (s3[i] == s4[i] && s3[i] != '\0' && i < n)
		i++;
	if (s3[i] != s4[i] && i < n)
		m = (s3[i] - s4[i]);
	return (m);
}
