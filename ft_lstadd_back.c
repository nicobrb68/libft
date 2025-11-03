/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:53:39 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/11/03 16:59:33 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.a"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (lst->next)
	{
		lst = lst->next;
	}
	lst = *new;
	return ;
}
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

	ft_lstadd_back(t_list **lst, t_list e)
	
    return (0);
}*/