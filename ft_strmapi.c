/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojoseph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 16:36:01 by jojoseph          #+#    #+#             */
/*   Updated: 2019/09/21 20:05:40 by jojoseph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fresh;
	size_t			i;
	unsigned int	a;

	i = 0;
	a = 0;
	if (s && f)
	{
		fresh = ft_strnew(ft_strlen(s));
		if (fresh == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			fresh[i] = f(a, s[i]);
			i++;
			a++;
		}
		return (fresh);
	}
	return (NULL);
}
