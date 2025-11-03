/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:00:46 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/10/30 13:19:53 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getcount(const char *s1, const char *set)
{
	int	i;
	int	count;
	int	x;

	x = 0;
	count = 0;
	i = 0;
	while (set[x])
	{
		i = 0;
		while (s1[i])
		{
			if (s1[i] == set[x])
				count++;
			i++;
		}
		x++;
	}
	return (count);
}

static int	ft_ischarset(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*res;
	int		total_size;
	int		x;

	x = 0;
	i = 0;
	total_size = ft_strlen(s1) - ft_getcount(s1, set);
	res = malloc((total_size + 1) * (sizeof(char)));
	if (!res)
		return (0);
	while (s1[x])
	{
		if (!ft_ischarset(s1[x], set))
		{
			res[i] = s1[x];
			i++;
		}
		x++;
	}
	res[i] = '\0';
	return (res);
}

/*
int main (void)
{
	const char *s1 ="123456789";
	char const *set = "9      ";
	char *res;
	res = ft_strtrim(s1,set);
	printf("%s\n",res);
	return 0;
}
*/