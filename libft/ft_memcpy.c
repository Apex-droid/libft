/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:17:37 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/11 19:17:43 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t n)
{
	unsigned long		i;
	unsigned char		*d;
	unsigned const char *s;

	d = dest;
	s = source;
	i = 0;
	if (dest == NULL && source == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
