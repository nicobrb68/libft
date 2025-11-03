/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:58:49 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/10/31 14:32:00 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	f(unsigned int index, char *s)
{
	if (index >= 0)
		*s = 'H';
	return ;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
	return ;
}

/*
int	main (void)
{
	char s[100] = "bonjour tout le monde ";
	ft_striteri(s, *f);
	printf("%s\n", s);



	return 0;
}*/