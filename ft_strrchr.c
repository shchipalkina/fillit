/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:13:21 by cmilda            #+#    #+#             */
/*   Updated: 2019/09/22 20:15:55 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len_s;
	char	*find;

	len_s = ft_strlen(s);
	find = (char *)(s + len_s);
	len_s += 1;
	while (len_s--)
	{
		if (*find == (unsigned char)c)
			return (find);
		find--;
	}
	return (0);
}
