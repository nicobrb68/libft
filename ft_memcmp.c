/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:46:19 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/10/29 14:04:16 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*casts1;
	unsigned char	*casts2;

	casts1 = (unsigned char *)s1;
	casts2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (*casts1 && n -1 && *casts1 == *casts2)
	{
		casts1++;
		casts2++;
		n--;
	}
	return (*casts1 - *casts2);
}

/*
#include <stdio.h>

int main (void)
{
	printf("%d",ft_memcmp("abA", "abba", -3));
	return 0;
}*/