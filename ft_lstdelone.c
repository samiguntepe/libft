/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:00:43 by sguntepe          #+#    #+#             */
/*   Updated: 2022/11/20 15:00:44 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

//void	*del(void *lst);

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

// int main(void)
// {
//     t_list *node,*freeNode;

//     node = (t_list *)malloc(sizeof(t_list));
//     freeNode = (t_list *)malloc(sizeof(t_list));
//     node->content = "42Kocaeli";
//     node->next = freeNode;

//     ft_lstdelone(node,(void *)(*del));

//     if(node->content == NULL && node->next == NULL)
//         printf("1");
//     else
//         printf("0");
//         return 0;
// }

// void    *del(void *lst)
// {
//     t_list *ptr;

//     ptr = (t_list *)lst;

//     ptr->content = 0;
//     return 0;
// }
