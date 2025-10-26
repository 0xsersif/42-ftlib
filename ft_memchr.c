/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersif <sersif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 00:54:55 by sersif            #+#    #+#             */
/*   Updated: 2025/10/27 01:31:21 by sersif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *ptr, int ch, size_t num)
{
	unsigned char	*t_ptr;
	size_t			i;

	i = 0;
	t_ptr = (unsigned char *) ptr;
	while (num > i)
	{
		if (*t_ptr == (unsigned char) ch)
			return (t_ptr);
		i++;
		t_ptr++;
	}
	return (NULL);
}
