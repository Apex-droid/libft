/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:31:39 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/11 19:31:42 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int symbol)
{
	while (*string != '\0')
	{
		if (*string == symbol)
			return ((char*)string);
		else
			string++;
	}
	if (*string == '\0' && symbol == '\0')
		return ((char*)string);
	return (NULL);
}
