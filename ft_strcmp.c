/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojoseph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 17:02:34 by jojoseph          #+#    #+#             */
/*   Updated: 2019/09/22 23:58:42 by jojoseph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	int				m;
	unsigned char	*s3;
	unsigned char	*s4;

	i = 0;
	m = 0;
	s3 = (unsigned char*)s1;
	s4 = (unsigned char*)s2;
	while (s3[i] == s4[i] && s3[i] != '\0')
		i++;
	if (s3[i] != s4[i])
		m = (s3[i] - s4[i]);
	return (m);
}
