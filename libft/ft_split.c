/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarina <sfarina@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:57:45 by sfarina           #+#    #+#             */
/*   Updated: 2022/02/09 17:01:33 by sfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	wcount(char const *s, char c)
{
	int	a;
	int	flag;

	a = 0;
	flag = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			a++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (a);
}

static char	*wcopy(char const *s, int start, int finish)
{
	int		a;
	char	*nwrd;

	a = 0;
	nwrd = malloc((finish - start + 1) * sizeof (char));
	while (start < finish)
		nwrd[a++] = s[start++];
	nwrd[a] = '\0';
	return (nwrd);
}

char	**ft_split(char const *s, char c)
{
	size_t	a;
	size_t	b;
	int		index;
	char	**str;

	str = malloc((wcount(s, c) + 1) * sizeof(char *));
	if (!s || !str)
		return (0);
	a = 0;
	b = 0;
	index = -1;
	while (a <= ft_strlen(s))
	{
		if (s[a] != c && index < 0)
			index = a;
		else if ((s[a] == c || a == ft_strlen(s)) && index >= 0)
		{
			str[b++] = wcopy(s, index, a);
			index = -1;
		}
			a++;
	}
	str[b] = 0;
	return (str);
}
