/*ft_lstiter
Prototype void ft_lstiter(t_list *lst, void (*f)(void *));
Files to Submit -
Parameters lst: The address of a pointer to a node.
f: The address of the function to apply to each
node’s content.
Return Value None
External Function None
Description Iterates through the list ’lst’ and applies the
function ’f’ to the content of each node.
*/

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next ;
	}
	return ;
}
