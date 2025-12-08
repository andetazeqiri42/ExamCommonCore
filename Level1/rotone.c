/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeqiri <azeqiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:27:23 by azeqiri           #+#    #+#             */
/*   Updated: 2025/12/08 17:32:48 by azeqiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.
*/
#include <unistd.h>

char	rotone(char c)
{
	if(c>='a' && c<='z')
	{
		return (c+1);
	}
	if (c>= 'A' && c<= 'Z')
	{
		return (c+1);
	}
	return (c);
}

int main(int ac, char *av[])
{
	int i=0;
	if(ac==2)
	{
		while(av[1][i])
		{
			 char x= rotone(av[1][i]);
			 write(1, &x, 1);
			 i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}