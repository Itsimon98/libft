/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarina <sfarina@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:20:49 by sfarina           #+#    #+#             */
/*   Updated: 2022/02/08 15:57:37 by sfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;
	char	*s2;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	a = ft_strlen(s1);
	while (a && ft_strrchr(set, s1[a]))
		a--;
	s2 = ft_substr(s1, 0, a + 1);
	if (!s2)
		return (NULL);
	return (s2);
}
