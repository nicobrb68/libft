/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:04:50 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/10/29 15:26:02 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		x = 0;
		if (big[i] == little[x])
		{
			while (big[i + x] == little[x] && i + x < len)
			{
				x++;
				if (little[x] == '\0')
					return ((char *)&big[i]);
			}
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int main (void)
{
	
	const char *aa = "Salut tout";
	const char *bb = "Salut tout le" ;
	printf("%s", ft_strnstr(aa, bb, 190));
	return 0;
}*/