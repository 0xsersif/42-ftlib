/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersif <sersif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 00:54:55 by sersif            #+#    #+#             */
/*   Updated: 2025/10/24 01:31:21 by sersif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	char	*ptr_s;
	char	ch;
	int		i;

	ptr_s = (char *)s;
	ch = (char)c;
	i = 0;
	while (ptr_s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (ptr_s[i] == ch)
			return (&ptr_s[i]);
		i--;
	}
	return (NULL);
}
