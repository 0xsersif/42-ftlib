/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersif <sersif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 00:54:55 by sersif            #+#    #+#             */
/*   Updated: 2025/08/04 01:31:21 by sersif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t num_elem, size_t elem_size)
{
	void	*mem;

	if (num_elem != 0)
	{
		if (elem_size > SIZE_MAX / num_elem)
			return (NULL);
	}
	mem = malloc(num_elem * elem_size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, num_elem * elem_size);
	return (mem);
}
