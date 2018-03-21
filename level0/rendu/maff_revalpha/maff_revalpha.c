/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beloff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 01:22:44 by beloff            #+#    #+#             */
/*   Updated: 2018/03/21 01:26:58 by beloff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)			// This is your protype ft_putchar for using write in your code.
{									// Don't forget your Curly Brackets Yo
	write(1, &c, 1);				// write 1 line, the address of character of 1 byte. or just the character...
}

int		main(void)					// This is how you prototype your main to reference ft_putchar used above...
{
	int i;							// This is where you declare your variables
	int j;							// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
	
	i = 'z';						// This is how you initialise a variable and where you come to if you get the error that a variable is not initialised
	j = 'Y';						// Refer to above comment
	while (i > 'a' && j >= 'A')		//ascii value of Z is 90 which is smaller than ascii value for A, which is 65. Same goes for a and z
	{
		ft_putchar(i);				// This is where you put the character according to your variable, eg. i = z
		ft_putchar(j);				// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^, eg. j = Y
		i--;						// This is an decrement
		i--;						// This will be your second decrement, which gives us (a, ,c) and could have been typed like this i -= 2
		j--;						// This will an decrement for your second putchar
		j--;						// Another decrement because we want a capital D ( ,B, ,D) and could have been typed out as j -= 2
	}
	return ('\n');					// If a new line is requested but not needed within the while loop, it will be outisde the loop, below the '}' braket
}
