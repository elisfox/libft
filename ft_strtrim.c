/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojoseph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 22:01:14 by jojoseph          #+#    #+#             */
/*   Updated: 2019/09/23 00:13:11 by jojoseph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char				*str;
	unsigned int		i;
	unsigned int		len;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while ((s[i] != '\0') && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while ((i < len) && (s[len - 1] == ' ' ||
				s[len - 1] == '\n' || s[len - 1] == '\t'))
		len--;
	str = ft_strsub(s, i, (len - i));
	if (str == NULL)
		return (NULL);
	return (str);
}
