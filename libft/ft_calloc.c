/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 12:44:01 by sfarina           #+#    #+#             */
/*   Updated: 2022/02/08 15:37:11 by sfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;
	size_t	t;

	t = (count * size);
	s = malloc(t);
	if (!s)
		return (NULL);
	ft_bzero(s, t);
	return ((void *)s);
}
