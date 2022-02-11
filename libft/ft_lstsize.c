/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarina <sfarina@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:25:07 by sfarina           #+#    #+#             */
/*   Updated: 2022/02/08 15:48:33 by sfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*str;

	count = 0;
	str = lst;
	while (str)
	{
		str = str->next;
		count++;
	}
	return (count);
}
