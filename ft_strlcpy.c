/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersif <sersif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 00:54:55 by sersif            #+#    #+#             */
/*   Updated: 2025/10/24 01:31:21 by sersif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char const *src, size_t size)
{
	size_t	s;
	size_t	len_src;

	s = 0;
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	while (s < size - 1 && src[s])
	{
		dest[s] = src[s];
		s++;
	}
	dest[s] = '\0';
	return (len_src);
}
