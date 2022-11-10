/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 23:41:33 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/13 23:41:43 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *bigger, const char *lower, size_t len)
{
	unsigned long i;
	unsigned long j;

	i = 0;
	j = 0;
	if (!*lower)
		return ((char*)bigger);
	while (bigger[i] != '\0' && i < len)
	{
		while (j + i < len && bigger[i + j] == lower[j])
		{
			j++;
			if (lower[j] == '\0')
				return ((char*)&bigger[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
