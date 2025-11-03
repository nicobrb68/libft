/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:44:20 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/10/29 11:35:08 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_dst;
	size_t	size_src;
	size_t	i;

	i = 0;
	size_dst = 0;
	size_src = 0;
	while (dst[size_dst])
		size_dst++;
	while (src[size_src])
		size_src++;
	if (size == 0)
		return (size_src);
	if (size_dst >= size)
		return (size + size_src);
	while ((src[i]) && (i + size_dst < size -1))
	{
		dst[i + size_dst] = src[i];
		i++;
	}
	dst[i + size_dst] = '\0';
	return (size_dst + size_src);
}
