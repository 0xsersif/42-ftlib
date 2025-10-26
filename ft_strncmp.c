/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersif <sersif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 00:54:55 by sersif            #+#    #+#             */
/*   Updated: 2025/08/04 01:31:21 by sersif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, size_t num)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]) && i < (num - 1))
		i++;
	if ((num == 0) || (s1[i] == s2[i]))
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
