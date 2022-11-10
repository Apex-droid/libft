/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:26:16 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/11 19:26:22 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *c;

	c = (t_list*)malloc(sizeof(t_list));
	if (!c)
		return (NULL);
	c->content = content;
	c->next = NULL;
	return (c);
}
