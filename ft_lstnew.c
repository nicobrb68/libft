/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:54:34 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/11/03 13:54:41 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*x;

	x = malloc(sizeof(t_list));
	if (!x)
		return (NULL);
	x->content = content;
	x->next = NULL;
	return (x);
}

/*
int main (void)
{
	int i = 5;
	t_list *res;

	res = ft_lstnew(&i);
	printf("%d\n",*(int *)res->content);
	free(res);
	return 0;	
}
	*/