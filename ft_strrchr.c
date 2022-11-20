/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:45:45 by sguntepe          #+#    #+#             */
/*   Updated: 2022/11/01 15:20:36 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*
int main()
{
	char s[] = "Merhaba42Kocaeli";
	printf("%s",ft_strrchr(s,'4'));
}
*/

/* Bulunan karakterden "c" itibaren sayar ve döndürür.
 * strchr ile aynı sonucu verir.
 * (Bu olayı tersten başlayarak yapar) */
