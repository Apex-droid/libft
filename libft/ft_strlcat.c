/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:32:28 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/11 19:32:32 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned long i;
	unsigned long j;

	j = 0;
	i = 0;
	while (i < size && dst[i] != '\0')
		i++;
	while (i + j + 1 < size && src[j] != '\0')
	{
		dst[i + j + 1] = '\0';
		dst[i + j] = src[j];
		j++;
	}
	return (i + ft_strlen(src));
}
