/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 06:34:43 by cmilda            #+#    #+#             */
/*   Updated: 2019/09/22 20:08:17 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = (size_t)-1;
	while (++i < n)
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (&((void *)s)[i]);
	return (0);
}
