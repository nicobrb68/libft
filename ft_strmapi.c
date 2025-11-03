/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:42:08 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/10/31 13:57:54 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_getlen(char const *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
char f(unsigned int i, char c)
{
	char	x;
	x = ' ';
	if (i > 0)
	{
		c = 'e';
	 	x = c;
	}
	return (x);
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*res;

	i = 0;
	len = ft_getlen(s);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	res[len] = '\0';
	while (i < len)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	return (res);
}

/*
int main (void)
{
	const char *s = "Bonjour tout le monde";
	printf("%s\n",ft_strmapi(s, *f));

return 0;


	
}*/