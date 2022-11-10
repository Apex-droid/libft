/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:35:44 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/11 19:35:49 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int symbol)
{
	char			*s;
	unsigned long	i;

	i = 0;
	s = (char*)string;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	while (*s != symbol && i--)
		s--;
	if (*s != symbol)
		return (NULL);
	return (s);
}
