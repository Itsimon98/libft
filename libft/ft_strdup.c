/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:47:04 by sfarina           #+#    #+#             */
/*   Updated: 2022/02/08 15:52:08 by sfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		a;
	int		len;

	a = 0;
	len = 0;
	len = ft_strlen(s1);
	s2 = malloc(len + 1);
	if (!s2)
		return (NULL);
	while (s1[a] != '\0')
	{
		s2[a] = s1[a];
		a++;
	}
	s2[a] = '\0';
	return (s2);
}
