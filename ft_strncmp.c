/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:49:27 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/10/29 13:20:11 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1 && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int main (void)
{
	char s1[20] = "ABC";
	char s2[20] = "ABC";
	printf("%d", ft_strncmp(s1,s2,2));

	return 0;
}*/