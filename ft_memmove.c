/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersif <sersif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 00:54:55 by sersif            #+#    #+#             */
/*   Updated: 2025/10/24 01:31:21 by sersif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t num)
{
	unsigned char	*t_dest;
	unsigned char	*t_src;

	t_dest = (unsigned char *) dest;
	t_src = (unsigned char *) src;
	if (!dest && !src)
		return (0);
	if (t_dest > t_src)
	{
		t_dest += num - 1;
		t_src += num - 1;
		while (num > 0)
		{
			*t_dest = *t_src;
			t_dest--;
			t_src--;
			num--;
		}
	}
	else
		ft_memcpy(dest, src, num);
	return (dest);
}
