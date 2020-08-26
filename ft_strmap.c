/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojoseph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:36:06 by jojoseph          #+#    #+#             */
/*   Updated: 2019/09/21 16:34:41 by jojoseph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	size_t	i;

	i = 0;
	if (s && f)
	{
		fresh = ft_strnew(ft_strlen(s));
		if (fresh == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			fresh[i] = f(s[i]);
			i++;
		}
		return (fresh);
	}
	return (NULL);
}
