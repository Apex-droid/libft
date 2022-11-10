/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:25:58 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/11 19:26:02 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *t;
	t_list *g;

	if (!lst)
		return (NULL);
	t = ft_lstnew(f(lst->content));
	if (!t)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		g = ft_lstnew(f(lst->content));
		if (!g)
		{
			ft_lstclear(&lst, del);
			return (t);
		}
		ft_lstadd_back(&t, g);
		lst = lst->next;
	}
	return (t);
}
