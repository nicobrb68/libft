/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:21:02 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/10/29 13:45:15 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*casts;

	casts = (unsigned char *)s;
	while (*casts && n > 0)
	{
		if (*casts == c)
			return ((void *)casts);
		casts++;
		n--;
	}
	return (0);
}

/*
#include <stdio.h>

int main (void)
{
	const char *str = "abba";
	printf("%s",(char *)ft_memchr(str, 'a', 6));
	return 0;
}*/
