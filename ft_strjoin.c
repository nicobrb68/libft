/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:38:37 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/10/30 12:00:08 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*res;
	unsigned int	total_size;
	unsigned int	i;
	unsigned int	x;

	x = 0;
	i = 0;
	total_size = ft_strlen(s1) + ft_strlen(s2);
	res = malloc((total_size + 1) * sizeof(char));
	if (!res)
		return (0);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[x])
	{
		res[i] = s2[x];
		i++;
		x++;
	}
	res[i] = '\0';
	return (res);
}

/*
int main (void)
{
	const char *s1 = "";
	const char *s2 = "vv";

	char *dest = ft_strjoin(s1,s2);
	printf("%s\n", dest);
	free(dest);
	return 0;
}*/