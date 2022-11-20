/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:52:57 by sguntepe          #+#    #+#             */
/*   Updated: 2022/11/01 15:17:09 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*(str++) == (unsigned char )c)
			return ((void *)(str - 1));
	}
	return (NULL);
}

/*
int main()
{
	char *s = "Sami Guntepe";
	printf("%c", (char *)ft_memchr(s,'u',8));
}
*/

/* s dizisinde c parametresine girilen değeri bulana kadar indexlerde gezer 
 * ve c parametresini bulunca adresini döndürür. 
 * n değeri kadar arama yapar. */
