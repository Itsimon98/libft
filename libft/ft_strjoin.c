/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:28:52 by sfarina           #+#    #+#             */
/*   Updated: 2022/02/08 15:55:50 by sfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		s1len;
	int		s2len;
	int		c;

	if (!s1 || !s2)
		return (0);
	c = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	s3 = (char *) malloc(sizeof (char) * (s1len + s2len + 1));
	if (!s3)
		return (NULL);
	while (c < s1len)
	{
		s3[c] = s1[c];
		c++;
	}
	c = 0;
	while (c < s2len)
		s3[s1len++] = s2[c++];
	s3[s1len] = '\0';
	return (s3);
}
