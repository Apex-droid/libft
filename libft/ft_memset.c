/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:29:08 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/11 19:29:14 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memptr, int val, size_t num)
{
	unsigned int	i;
	char			*y;

	i = 0;
	y = memptr;
	while (i < num)
	{
		y[i] = val;
		i++;
	}
	return (y);
}
