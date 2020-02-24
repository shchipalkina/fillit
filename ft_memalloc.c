/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:45:34 by cmilda            #+#    #+#             */
/*   Updated: 2019/10/31 23:51:42 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *mall;

	if (!size)
		return (0);
	if (!(mall = (unsigned char *)malloc(size)))
		return (NULL);
	ft_bzero(mall, size);
	return ((void *)mall);
}
