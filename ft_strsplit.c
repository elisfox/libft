/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojoseph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 15:55:31 by jojoseph          #+#    #+#             */
/*   Updated: 2019/09/23 18:31:39 by jojoseph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s || !(arr = (char **)malloc(sizeof(char *) * (ft_word(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			if (!(arr[j] = ft_strnew(ft_len(s, c))))
				return (ft_free(arr, j));
			while (*s && *s != c)
				arr[j][i++] = *(s++);
			j++;
			i = 0;
		}
	}
	arr[j] = NULL;
	return (arr);
}
