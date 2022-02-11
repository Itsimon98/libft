/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarina <sfarina@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:58:20 by sfarina           #+#    #+#             */
/*   Updated: 2022/02/08 15:45:19 by sfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*e;

	new = 0;
	while (lst)
	{
		e = ft_lstnew(f(lst->content));
		if (!e)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, e);
		lst = lst -> next;
	}
	return (new);
}
