/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:57:10 by sguntepe          #+#    #+#             */
/*   Updated: 2022/11/22 13:16:04 by sguntepe         ###   ########.fr       */
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

void ft_change(void *content)
{
    int i = 0;
	
	while (((char *)content)[i])
    {
		((char *)content)[i] = ft_toupper(((char *)content)[i]);
        i++;
    }
}

// int main()
// {
//     t_list *node1,*node2,*node3;

//     node1 = (t_list *)malloc(sizeof(t_list));
//     node2 = (t_list *)malloc(sizeof(t_list));
//     node3 = (t_list *)malloc(sizeof(t_list));

// 	ft_lstadd_back(&node1,node2);
// 	ft_lstadd_back(&node1,node3);

//     node1->content = ft_strdup("kocaeli");
//     node2->content = ft_strdup("kocaeli");
//     node3->content = ft_strdup("kocaeli");

//     ft_lstiter(node1,ft_change);

//     printf("%s\n",(char *)node1->content);
//     printf("%s\n",(char *)node1->next->content);
//     printf("%s\n",(char *)node1->next->next->content);
// }
