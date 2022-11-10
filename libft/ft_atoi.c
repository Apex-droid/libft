/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:13:44 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/11 19:14:02 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_spaces(const char *st)
{
	while ((*st <= 13 && *st >= 9) || *st == 32)
	{
		st++;
	}
	return (st);
}

int					ft_atoi(const char *str)
{
	unsigned long	m;
	int				y;

	y = 1;
	m = 0;
	str = ft_spaces(str);
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			y = -1;
		str++;
	}
	while (*str != '\0' && *str <= '9' && *str >= '0')
	{
		m = m * 10 + (*str - '0');
		str++;
	}
	if (m > 2147483648 && y == -1)
		return (0);
	if (m > 2147483647 && y == 1)
		return (-1);
	return ((int)m * y);
}
