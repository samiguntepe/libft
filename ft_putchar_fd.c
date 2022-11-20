/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:20:38 by sguntepe          #+#    #+#             */
/*   Updated: 2022/11/01 16:58:55 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main()
{
	int fd = open("/Users/sguntepe/Desktop/test.txt",O_WRONLY);
	ft_putchar_fd('S',fd);
}
*/

// Belirtilen dosya tanimlayicisina (fd) c karakterini yazar.