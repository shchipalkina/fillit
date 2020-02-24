/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 03:30:24 by cmilda            #+#    #+#             */
/*   Updated: 2019/11/04 03:48:31 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*iter;

	if (alst && *alst && del)
	{
		iter = *alst;
		while (iter)
		{
			ft_lstdelone(&iter, del);
			iter = iter->next;
		}
		*alst = NULL;
	}
}
