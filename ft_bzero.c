/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:08:53 by sguntepe          #+#    #+#             */
/*   Updated: 2022/11/26 16:58:34 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char a[] = "samiguntepe";
// 	ft_bzero(a, 4);
// 	printf("%s", (a + 3));
// 	return 0;
// }

// s dizisine n değeri kadar null değer atar.