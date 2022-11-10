/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:27:10 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/11 19:27:14 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int c, size_t n)
{
	unsigned long	i;
	int				y;

	y = 0;
	i = 0;
	while (i < n)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)source)[i];
		if (((unsigned char*)source)[i] == (unsigned char)c)
		{
			y = 1;
			break ;
		}
		i++;
	}
	if (y == 0)
		return (NULL);
	else
		return ((unsigned char*)dest + i + 1);
}
