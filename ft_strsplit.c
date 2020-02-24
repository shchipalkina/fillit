/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 20:10:15 by cmilda            #+#    #+#             */
/*   Updated: 2019/11/01 00:52:53 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(char const *s, char c)
{
	size_t	words;
	size_t	in_a_word;

	words = 0;
	while (*s)
	{
		in_a_word = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			in_a_word = 1;
			s++;
		}
		if (in_a_word)
			words++;
	}
	return (words);
}

static size_t	ft_splitlen(char const *s, char c)
{
	size_t len;

	len = 0;
	while (*s && *s++ != c)
		len++;
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**split;
	size_t	len;
	size_t	i;
	size_t	words;

	i = 0;
	if (!s)
		return (NULL);
	words = ft_countwords(s, c);
	if (!(split = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			len = ft_splitlen(s, c);
			split[i++] = ft_strsub(s, 0, len);
			s += len;
		}
	}
	split[i] = NULL;
	return (split);
}
