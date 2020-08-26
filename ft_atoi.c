/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojoseph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:06:03 by jojoseph          #+#    #+#             */
/*   Updated: 2019/09/22 15:52:19 by jojoseph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t	nb;
	int		i;

	i = 1;
	nb = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
			|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
	{
		i = i * -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if ((nb * 10 + *str - 48) < nb)
			return ((i > 0 ? -1 : 0));
		nb = nb * 10 + (*str - 48);
		str++;
	}
	return (nb * i);
}
