/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeqiri <azeqiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 17:58:46 by azeqiri           #+#    #+#             */
/*   Updated: 2025/12/08 13:59:22 by azeqiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str);*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	i = 0; /* we initialize an intiger i that will be used later to iterate*/

	while (str[i]) /* we will loop until the null character is encountered in the string pointed by the str*/
	{
		write(1, &str[i], 1); /* print the elments*/
		i++; /* increment the i by one*/
	}
}

int	main(void)
{
	ft_putstr("hello world!");
	return (0);
}
