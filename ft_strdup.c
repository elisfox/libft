/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojoseph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 22:10:28 by jojoseph          #+#    #+#             */
/*   Updated: 2019/09/22 22:18:24 by jojoseph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*b;

	b = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (b == NULL)
		return (NULL);
	b = ft_strcpy(b, (char *)str);
	return (b);
}
