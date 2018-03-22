/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beloff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 17:51:27 by beloff            #+#    #+#             */
/*   Updated: 2018/03/22 10:41:31 by beloff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)				// You should know this by now but just in case... This is your putchar function to write characters
{
	write(1, &c, 1);					// Your write function as everyone knows or should know
}

char	ft_no_params(char *str)			// To return a string we need a string function
{
	int	i;								// index as always

	i = 0;								// Set to the biginnig since words need it
	while (str[i] != '\0')				// We need to get all of the string before it ends 
	{
		ft_putchar(str[i]);				// So that we can put down the first character and restart the while loop
		i++;							// No we increment to put down the next character before the Null character
	}
	ft_putchar('\n');					// To put a new line or line break
	return (*str);						// If all else fails return the input string
}

int		main(int argc, char **argv)		// Since we doing a program a main is needed
{
	if (argc >= 2)						// Need to have the arguments to be less or to 2
	{
		ft_no_params(argv[1]);			// putting down only the first paramater
	}
	else								// OOOOOR
	{
		ft_putchar('\n');				// A new line for less than 1 paramaters
	}
	return (0);							// When your code sucks and it returns just how you feel
}
