/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeqiri <azeqiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:52:42 by azeqiri           #+#    #+#             */
/*   Updated: 2025/12/08 16:09:28 by azeqiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.
*/
#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int	j;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				j = 0;
				while (j < av[1][i] - ('A' - 1))
				{
					write(1, &av[1][i], 1);
					j++;
				}
			}
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				j = 0;
				while (j < av[1][i] - ('z' - 1))
				{
					write(1, &av[1][i], 1);
					j++;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
