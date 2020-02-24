/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 05:24:51 by cmilda            #+#    #+#             */
/*   Updated: 2019/09/18 19:34:46 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			len_s1;
	size_t			len_s2;
	char			*mall;

	if (s1 && s2)
	{
		len_s1 = ft_strlen(s1);
		len_s2 = ft_strlen(s2);
		if (len_s1 + len_s2 + 1 == 0)
			return (0);
		mall = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
		if (mall)
		{
			ft_memcpy(mall, s1, len_s1);
			ft_memcpy(mall + len_s1, s2, len_s2);
			mall[len_s1 + len_s2] = '\0';
			return (mall);
		}
	}
	return (0);
}
