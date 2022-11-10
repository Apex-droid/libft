/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:31:14 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/11 19:31:18 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void					ft_all_free(char **c, unsigned long j)
{
	unsigned long v;

	v = 0;
	while (v < j)
	{
		free(c[v]);
		v++;
	}
	free(c);
}

static unsigned long		ft_word_counter(char const *k, char g)
{
	unsigned long i;

	i = 0;
	while (*k != '\0')
	{
		if ((k[1] == g && *k != g) || (k[1] == '\0' && *k != g))
			i++;
		k++;
	}
	return (i);
}

static const char			*ft_word_skip(const char *p, char n, int *x)
{
	if ((*p != n) && (*p != '\0'))
		*x = *x + 1;
	while ((*p != n) && (*p != '\0'))
		p++;
	while ((*p == n) && (*p != '\0'))
		p++;
	return (p);
}

static char					*ft_word_taker(const char *y, char u)
{
	unsigned long	z;
	char			*t;

	z = 0;
	while (y[z] != u && y[z] != '\0')
		z++;
	t = (char*)malloc((z + 1) * sizeof(char));
	if (!t)
		return (NULL);
	if (z != 0)
		t[z] = '\0';
	while (z)
	{
		z--;
		t[z] = y[z];
	}
	return (t);
}

char						**ft_split(char const *s, char c)
{
	char	**f;
	int		g;

	g = 0;
	if (!s)
		return (NULL);
	f = (char**)malloc(sizeof(char*) * (ft_word_counter(s, c) + 1));
	if (!f)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
			s = ft_word_skip(s, c, &g);
		f[g] = ft_word_taker(s, c);
		if (!f[g])
		{
			ft_all_free(f, g);
			return (NULL);
		}
		s = ft_word_skip(s, c, &g);
	}
	if (!f)
		return (NULL);
	f[g] = NULL;
	return (f);
}
