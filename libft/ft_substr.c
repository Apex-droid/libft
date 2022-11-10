/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:37:19 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/11 19:37:25 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*y;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		y = (char*)malloc(sizeof(char));
		if (!y)
			return (NULL);
		*y = '\0';
	}
	else
	{
		y = (char*)malloc(sizeof(char) * (len + 1));
		if (!y)
			return (NULL);
		y = (char*)ft_memcpy(y, &s[start], len);
		y[len] = '\0';
	}
	return (y);
}
