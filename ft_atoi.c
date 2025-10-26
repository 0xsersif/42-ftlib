/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersif <sersif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 00:54:55 by sersif            #+#    #+#             */
/*   Updated: 2025/08/04 01:31:21 by sersif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *str)
{
	int			p_n;
	long long	num;
	long long	check;

	p_n = 1;
	num = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			p_n = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		check = num * 10 + *str - 48;
		if (check / 10 != num && p_n == 1)
			return (-1);
		if (check / 10 != num && p_n == -1)
			return (0);
		num = check;
		str++;
	}
	return ((int)num * p_n);
}
