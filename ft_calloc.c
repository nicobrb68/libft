/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:30:14 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/10/31 16:54:26 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(1)); 
	if ((nmemb * size) / size != nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
*/
void    *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char    *res;
    size_t            i;

    i = 0;
    if (nmemb == 0 || size == 0)
        return(malloc(1));
    if ((nmemb * size)/size != nmemb)
        return (0);
    res = malloc(nmemb * size);
    if (!res)
        return (0);
    while (i < nmemb * size)
    {
        res[i] = '\0';
        i++;
    }
    return ((void *)res);
}
/*
int main (void)
{
	int nb = 0;
	int *res = ft_calloc(nb,sizeof(int));
	int i;

	i = 0;
	

		//while (i < nb)
		//{
			printf("%p\n",res+3);
		//	i++;
		//}


	free(res);
		return (0);
}*/