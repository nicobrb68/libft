/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:06:07 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/10/29 10:04:00 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*castdest;
	unsigned char	*castsrc;
	size_t			i;

	castdest = (unsigned char *)dest;
	castsrc = (unsigned char *)src;
	if (castdest > castsrc)
	{
		i = 0;
		while (i < n)
		{
			castdest[i] = castsrc[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i--)
		{
			castdest[i] = castsrc[i];
		}
	}
	return (dest);
}

/*#include <stdio.h>

int main(void)
{

	char src[50] = "a shiny white sphere";
	ft_memmove(src, src, 10);
	printf("%s",src);
	
	return 0;
}*/	
