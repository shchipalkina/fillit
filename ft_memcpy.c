/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 05:20:21 by cmilda            #+#    #+#             */
/*   Updated: 2019/09/23 09:09:55 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *dst_new;
	unsigned char *src_new;

	dst_new = (unsigned char *)dst;
	src_new = (unsigned char *)src;
	if (dst_new == src_new)
		return (dst);
	while (n-- > 0)
		*(dst_new++) = *(src_new++);
	return (dst);
}
