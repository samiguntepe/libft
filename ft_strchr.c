/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:22:12 by sguntepe          #+#    #+#             */
/*   Updated: 2022/11/20 13:10:04 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
// #include <stdio.h>
char	*ft_strchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		s_len--;
	}
	return (NULL);
}

/*
int main()
{
	char str[] = "Merhaba42";
	printf("%s",ft_strchr(str,'b'));
	
}
*/

//Bulunan karakterden "c" itibaren sayar ve döndürür.
