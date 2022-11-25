/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:40:19 by sguntepe          #+#    #+#             */
/*   Updated: 2022/11/25 19:58:20 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

// #include <stdio.h>

// int	main(){

// 	char dizi[] = "Merhaba42";
// 	printf("%s",ft_memset(dizi,'c',3));
	 
//     return 0;
// }

// c değeri len değeri kadar b dizisine kopyalanır.