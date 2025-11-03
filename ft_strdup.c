/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:37:08 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/10/30 10:55:52 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s)
{
	unsigned int	size;
	char			*dups;
	unsigned int	i;

	i = 0;
	size = ft_getlen(s);
	dups = malloc((size + 1) * sizeof(char));
	while (s[i])
	{
		dups[i] = s[i];
		i++;
	}
	dups[i] = '\0';
	return (dups);
}

/*
int main (void)
{
	const char * s = "hello world aha";
	char *dest = ft_strdup(s);
	printf("%s\n",dest);




	return 0;
}*/