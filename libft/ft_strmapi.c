/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarina <sfarina@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:55:08 by sfarina           #+#    #+#             */
/*   Updated: 2022/02/08 15:56:38 by sfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	a;
	char			*ns;
	size_t			b;

	if (!s)
		return (0);
	b = ft_strlen(s);
	a = 0;
	ns = ft_strdup(s);
	if (!ns)
		return (NULL);
	while (ns[a])
	{
		ns[a] = f(a, ns[a]);
		a++;
	}
	return (ns);
}
