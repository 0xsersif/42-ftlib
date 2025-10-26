/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersif <sersif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 00:54:55 by sersif            #+#    #+#             */
/*   Updated: 2025/08/04 01:31:21 by sersif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t num)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	if (num == 0)
		return (0);
	i = 0;
	while (haystack[i] != '\0' && i < num)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < num)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
