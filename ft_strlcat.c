/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersif <sersif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 00:54:55 by sersif            #+#    #+#             */
/*   Updated: 2025/10/24 01:31:21 by sersif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t	i;
	size_t	l_dst;
	size_t	s_total;
	size_t	s_remain;

	i = 0;
	l_dst = ft_strlen(dest);
	s_total = l_dst + ft_strlen(src);
	if (size == 0 || size <= l_dst)
		return (ft_strlen(src) + size);
	else
		s_remain = size - l_dst - 1;
	while (src[i] && s_remain > i)
	{
		dest[l_dst + i] = src[i];
		i++;
	}
	dest[l_dst + i] = '\0';
	return (s_total);
}
