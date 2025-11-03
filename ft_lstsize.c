/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:41:53 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/11/03 16:31:26 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
int main()
{
    int    a = 1;
    int b = 2;
    int c = 3;
    t_list *d = ft_lstnew(&a);
    t_list *e = ft_lstnew(&b);
    t_list *f = ft_lstnew(&c);


   ft_lstadd_front(&d, e);
    ft_lstadd_front(&d, f);

    return (0);
}*/