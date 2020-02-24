/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquincy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 23:49:38 by jquincy           #+#    #+#             */
/*   Updated: 2019/11/19 20:00:55 by jquincy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"
#include <stdio.h>
#include <fcntl.h>

int		main(int ac, char **av)
{
	t_list	*list;
	t_map	*map;

	if (ac != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (1);
	}
	if ((list = read_tetr(open(av[1], O_RDONLY))) == NULL)
	{
		ft_putstr("error\n");
		return (1);
	}
	map = solve(list);
	print_map(map);
	free_map(map);
	free_list(list);
	return (0);
}
