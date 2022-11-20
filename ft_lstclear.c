/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:00:48 by sguntepe          #+#    #+#             */
/*   Updated: 2022/11/20 15:01:51 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*del(void *lst);

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

// int main(void)
// {
//     t_list *node,*node1,*node2;

//     node = (t_list *)malloc(sizeof(t_list));
//     node1 = (t_list *)malloc(sizeof(t_list));
//     node2 = (t_list *)malloc(sizeof(t_list));

// }

// void    *del(void *lst)
// {
//     t_list *ptr;

//     ptr = (t_list *)lst;

//     ptr->content = 0;
//     return 0;
// }
