/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:57:10 by sguntepe          #+#    #+#             */
/*   Updated: 2022/11/20 18:03:40 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

// void ft_change(void *lst)
// {
//     ((t_list *)lst)->content = "selam";
// }

// int main()
// {
//     t_list *node1,*node2,*node3;

//     node1 = (t_list *)malloc(sizeof(t_list));
//     node2 = (t_list *)malloc(sizeof(t_list));
//     node3 = (t_list *)malloc(sizeof(t_list));

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     node1->content = "Kocaeli";
//     node2->content = "Kocaeli";
//     node3->content = "Kocaeli";

//     ft_lstiter(node1,ft_change);

//     printf("%s\n",(char *)node1->content);
//     printf("%s\n",(char *)node2->content);
//     printf("%s\n",(char *)node3->content);
// }
