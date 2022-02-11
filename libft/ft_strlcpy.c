/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:34:25 by sfarina           #+#    #+#             */
/*   Updated: 2022/01/14 13:28:25 by sfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	a = 0;
	if (dstsize > 0)
	{
		while (src[a] != '\0' && a < dstsize - 1)
		{	
			dst[a] = src[a];
			a++;
		}
		dst[a] = '\0';
	}
	return (srcsize);
}
