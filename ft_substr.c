/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:57:11 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/10/30 11:38:09 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	final_size;
	unsigned int	i;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
	{
		res = malloc(1);
		if (!res)
			return (0);
		res[0] = '\0';
		return (res);
	}
	i = ft_strlen(s) - start;
	if (i < len)
		final_size = i;
	else
		final_size = len;
	res = malloc(final_size * sizeof(char) + 1);
	if (!res)
		return (0);
	i = 0;
	while (i < final_size)
	{
		res[i] = s[start];
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*
int main (void)
{
	const char *s = "bonjour les amis  ";

	char *dest = ft_substr(s, 8, 9);
	printf("%s\n", dest);
	free(dest);
	return 0;
}*/