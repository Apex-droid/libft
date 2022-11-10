/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:32:14 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/11 19:32:18 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*u;
	size_t	y;
	size_t	x;

	if (!s1 || !s2)
		return (NULL);
	y = ft_strlen(s2);
	x = ft_strlen(s1);
	u = (char*)malloc(x + y + 1);
	if (!u)
		return (NULL);
	u[y + x] = '\0';
	while (y--)
		u[x + y] = s2[y];
	while (x--)
		u[x] = s1[x];
	return (u);
}
