/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:27:55 by cmilda            #+#    #+#             */
/*   Updated: 2019/11/01 00:07:35 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*mall;

	if (s)
	{
		if (!(mall = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		ft_memcpy(mall, (s + start), len);
		mall[len] = 0;
		return (mall);
	}
	return (0);
}
