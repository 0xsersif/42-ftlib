/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersif <sersif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 00:54:55 by sersif            #+#    #+#             */
/*   Updated: 2025/10/24 01:31:21 by sersif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;
	size_t	l_sub;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	l_sub = ft_strlen(s) - start;
	if (len < l_sub)
		l_sub = len;
	ret = (char *)malloc(sizeof(char) * (l_sub + 1));
	if (!ret)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		ret[i] = s[start];
		start++;
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
