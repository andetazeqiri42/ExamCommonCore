/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeqiri <azeqiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:56:12 by azeqiri           #+#    #+#             */
/*   Updated: 2025/12/08 17:09:07 by azeqiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.*/

#include <unistd.h>

int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
			i++;
		while (i--)
			write(1, &av[1][i], 1);
	}
	write(1, "\n", 1);
}
