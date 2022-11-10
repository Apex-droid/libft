/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:33:49 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/11 19:33:54 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*r;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	r = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!r)
		return (NULL);
	while (s[i] != '\0')
	{
		r[i] = f(i, s[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
