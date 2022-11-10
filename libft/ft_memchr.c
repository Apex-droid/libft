/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:16:24 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/11 19:16:29 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned long i;
	unsigned char *ar;

	ar = (unsigned char *)arr;
	i = 0;
	while (i < n)
	{
		if (ar[i] == (unsigned char)c)
			return ((unsigned char*)ar + i);
		i++;
	}
	return (NULL);
}
