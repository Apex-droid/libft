/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:16:38 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/11 19:16:43 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t num)
{
	unsigned long i;
	unsigned char *s2;
	unsigned char *s1;

	i = 0;
	s2 = (unsigned char*)str2;
	s1 = (unsigned char*)str1;
	while (num--)
	{
		if (*s1 != *s2 && s1 != NULL && s2 != NULL)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}
