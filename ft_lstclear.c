/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:00:48 by sguntepe          #+#    #+#             */
/*   Updated: 2022/11/22 15:52:56 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst)-> next;
		ft_lstdelone((*lst), del);
		*(lst) = temp;
	}
}

void    *del(void *lst)
{
    t_list *ptr;

    ptr = (t_list *)lst;

    ptr->content = 0;
    return 0;
}

int main(void)
{
    t_list *node1,*node2,*node3;

    node1 = ft_lstnew("42Kocaeli");
	node2 = ft_lstnew("42Kocaeli");
	node3 = ft_lstnew("42Kocaeli");

	ft_lstadd_back(&node1,node2);
	ft_lstadd_back(&node1,node3);

	ft_lstclear(&node1,del);

	printf("%s",node1->content);
}

// 