/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:36:01 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/11/03 16:51:05 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

/*
int main (void)
{
	 int    a = 1;
    int b = 2;
    int c = 3;
    //t_list *d = ft_lstnew(&a);
   // t_list *e = ft_lstnew(&b);
    //t_list *f = ft_lstnew(&c);


   ft_lstadd_front(&d, e);
    ft_lstadd_front(&d, f);
	t_list *value = ft_lstlast(f);
	printf("%d\n",*(int *)value->content);

    return (0);
}*/