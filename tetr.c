/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquincy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 23:56:06 by jquincy           #+#    #+#             */
/*   Updated: 2019/11/19 20:02:59 by jquincy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

t_list		*free_list(t_list *list)
{
	t_tetr	*tetr;
	t_list	*next;

	while (list)
	{
		tetr = (t_tetr *)list->cont;
		next = list->next;
		free_tetr(tetr);
		ft_memdel((void **)&list);
		list = next;
	}
	return (NULL);
}

void		free_tetr(t_tetr *tetr)
{
	int y;

	y = 0;
	while (y < tetr->length)
	{
		ft_memdel((void **)(&(tetr->pos[y])));
		y++;
	}
	ft_memdel((void **)(&(tetr->pos)));
	ft_memdel((void **)&tetr);
}

t_tetr		*tetr_new(char **pos, int width, int length, char val)
{
	t_tetr		*tetr;

	tetr = ft_memalloc(sizeof(t_tetr));
	tetr->pos = pos;
	tetr->width = width;
	tetr->length = length;
	tetr->val = val;
	return (tetr);
}

t_point		*point_new(int y, int x)
{
	t_point		*point;

	point = ft_memalloc(sizeof(t_point));
	point->x = x;
	point->y = y;
	return (point);
}
