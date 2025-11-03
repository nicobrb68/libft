/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:28:57 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/10/28 15:04:29 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*castdest;
	unsigned char	*castsrc;

	castdest = (unsigned char *)dest;
	castsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		castdest[i] = castsrc[i];
		i++;
	}
	return (dest);
}
