/*
Function Name ft_lstclear
Prototype void ft_lstclear(t_list **lst, void (*del)(void
*));
Files to Submit -
Parameters lst: The address of a pointer to a node.
del: The address of the function used to delete
the content of the node.
Return Value None
External Function free
Description Deletes and frees the given node and all its
successors, using the function ’del’ and free(3).
Finally, set the pointer to the list to NULL
*/

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
   t_list *tmp;

	if (!lst || !del)
      return ;
   while(*lst)
   {
      del((*lst)->content);
      tmp = (*lst)->next;
      free(*lst);
      *lst = tmp;
   }
   return ;
}



