/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:46:23 by sfarina           #+#    #+#             */
/*   Updated: 2022/01/14 15:15:10 by sfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		c = 0;
		while (haystack[i + c] == needle[c] && (i + c) < len)
		{
			if (haystack[i + c] == '\0' && needle[c] == '\0')
				return ((char *)haystack + i);
			c++;
		}
		if (needle[c] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
