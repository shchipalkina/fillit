/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 04:56:41 by cmilda            #+#    #+#             */
/*   Updated: 2019/09/25 01:09:34 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			size;
	size_t			i;
	char			*mall;

	mall = 0;
	if (s)
	{
		size = ft_strlen(s);
		mall = (char *)malloc(sizeof(char) * (size + 1));
		if (f && mall)
		{
			i = 0;
			while (i < size)
			{
				mall[i] = (*f)(i, s[i]);
				i++;
			}
			mall[i] = '\0';
		}
	}
	return (mall);
}
