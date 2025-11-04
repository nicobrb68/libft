/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 09:38:45 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/10/31 11:39:40 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlen(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		sign;
	long		nb;
	int		len;

	nb = n;
	sign = 0;
	if (nb < 0)
	{
		sign = 1;
		nb = -nb;
	}
	len = ft_getlen(nb);
	res = malloc(sizeof(char) * (len + sign + 1));
	if (!res)
		return (0);
	res[len + sign] = '\0';
	i = len + sign - 1;
	while (i >= sign)
	{
		res[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	if (sign == 1)
		res[0] = '-';
	return (res);
}

/*
int main (void)
{
	int nb = -0;
	printf("%s\n", ft_itoa(nb));
	return 0;
}*/