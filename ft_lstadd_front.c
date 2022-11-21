/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:31:05 by sguntepe          #+#    #+#             */
/*   Updated: 2022/11/21 23:28:12 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
// 	t_list *node1;
// 	t_list *node2;

// 	node1 = ft_lstnew("42");
// 	node2 = ft_lstnew(" Kocaeli");	
	
// 	ft_lstadd_front(&node2, node1);	
	
// 	printf("%s",(char *)node2->content);
// 	printf("%s",(char *)node2->next->content);
// 	return (0);
// }

// lst structının bağlı olduğu listelerin sonuna gider ve new sructını ekler.