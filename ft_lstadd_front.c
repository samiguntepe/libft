/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:31:05 by sguntepe          #+#    #+#             */
/*   Updated: 2022/11/20 12:56:09 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main()
// {
//     t_list *list;
//     t_list *list2;

//     list2 = ft_lstnew("güntepe");
//     list = ft_lstnew("sami");

//     ft_lstadd_front(&list2, list);

//     printf("%s",list2->content);
//     printf("%s",list2->next->content);    
// }
