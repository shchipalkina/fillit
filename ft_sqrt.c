/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 21:49:27 by cmilda            #+#    #+#             */
/*   Updated: 2019/09/24 23:53:05 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int c)
{
	int i;

	i = 0;
	while (i * i < c)
		i++;
	if (i * i == c)
		return (i);
	return (0);
}
