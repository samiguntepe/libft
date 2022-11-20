/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:50:23 by sguntepe          #+#    #+#             */
/*   Updated: 2022/11/20 10:58:10 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int main()
// {
//     printf("%s",(char *)ft_lstnew("sami")->content);
// }

// fonksiyona girilen parametre struct yapısının içeriğine eklenir.
// bir sonraki bağlı liste olmadığı için struct yapısının
// next pointerına NULL atanır.
// yeni oluşturulan struct return edilir.
