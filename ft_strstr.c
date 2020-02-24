/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:51:51 by cmilda            #+#    #+#             */
/*   Updated: 2019/09/25 01:11:06 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	j;
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (needle[j] != '\0' && haystack[i + j] == needle[j])
				++j;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		++i;
	}
	return (0);
}
