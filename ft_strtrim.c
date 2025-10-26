/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersif <sersif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 00:54:55 by sersif            #+#    #+#             */
/*   Updated: 2025/10/24 01:31:21 by sersif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	back;
	char	*result;

	front = 0;
	back = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	while (front <= back && ft_strchr(set, s1[front]))
		front++;
	if (front > back)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[back]) && back >= 0)
		back--;
	result = (char *)malloc(sizeof(char) * (back - front + 2));
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s1[front], back - front + 2);
	return (result);
}
