/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarina <sfarina@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:37:45 by sfarina           #+#    #+#             */
/*   Updated: 2022/02/08 15:38:51 by sfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lnode;

	if (!*lst)
	{	
		*lst = new;
		return ;
	}
	lnode = ft_lstlast(*lst);
	lnode->next = new;
}
