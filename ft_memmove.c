/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:55:24 by sguntepe          #+#    #+#             */
/*   Updated: 2022/11/01 15:17:54 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, n);
	else if (dst > src)
	{
		while (n--)
			*((unsigned char *)(dst + n)) = *((unsigned char *)(src + n));
	}
	return (dst);
}

/*
int main()
{
	char dst[] = "Sami Guntepe";
	char src[] = "bilgi";

	printf("%s",ft_memmove(dst,src,3));
}
*/

/* Memcopy ile aynı işlevi yapar fakat 
 * bellekte overlop olmaması için tersten kopyalar. */
