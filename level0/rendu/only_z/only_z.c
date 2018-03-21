/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_z.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beloff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 01:35:11 by beloff            #+#    #+#             */
/*   Updated: 2018/03/21 01:46:47 by beloff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)	// This is where you prototype your putchar function
{
	write(1, &c, 1);		// Write 1 line containing th eaddress of character that is 1 byte
}

int		main(void)			// Your main fucntion Yo
{
	ft_putchar('z');		// the character to be put down...
}
