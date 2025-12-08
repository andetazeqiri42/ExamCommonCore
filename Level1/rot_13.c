/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeqiri <azeqiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:09:30 by azeqiri           #+#    #+#             */
/*   Updated: 2025/12/08 17:27:01 by azeqiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.
*/
#include <unistd.h>

// rotate one character by 13
char	rot13_char(char c)
{
    // lowercase
    if (c >= 'a' && c <= 'z')
    {
        if (c <= 'm')	// a to m
            return (c + 13);
        else           // n to z
            return (c - 13);
    }

    // uppercase
	if (c >= 'A' && c <= 'Z')
	{
		if (c <= 'M')  // A to M
			return (c + 13);
		else           // N to Z
			return (c - 13);
	}

    // non-alphabetical stays the same
	return (c);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			char x = rot13_char(av[1][i]);
			write(1, &x, 1);
			i++;
		}
	}

	write(1, "\n", 1);
	return (0);
}
