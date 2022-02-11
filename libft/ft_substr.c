/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:12:50 by sfarina           #+#    #+#             */
/*   Updated: 2022/02/08 13:39:02 by sfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	a;

	a = 0;
	if (!s)
		return (NULL);
		s1 = malloc(sizeof (char) * len + 1);
	if (s1 == NULL)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (a < len)
		{
		s1[a] = s[start];
		a++;
		start++;
		}
	}	
	s1[a] = '\0';
	return (s1);
}
