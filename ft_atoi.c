/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 06:25:21 by cmilda            #+#    #+#             */
/*   Updated: 2019/09/23 08:42:19 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	first_ind(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || \
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int			ft_atoi(const char *str)
{
	int				i;
	int				sign;
	long long int	res;
	long long int	new_res;

	res = 0;
	sign = 1;
	i = first_ind((char *)str);
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		new_res = res * 10 + str[i++] - '0';
		if (res > new_res)
			return (sign == -1 ? 0 : -1);
		res = new_res;
	}
	return ((int)res * sign);
}
