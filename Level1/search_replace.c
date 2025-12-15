/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeqiri <azeqiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:44:04 by azeqiri           #+#    #+#             */
/*   Updated: 2025/12/10 18:15:02 by azeqiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program called search_and_replace that takes 3 arguments, the first arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.
*/
#include <unistd.h>


// main logic
int main(int ac, char *av[])
{
    int i = 0;

    // must have 3 arguments + program name → ac = 4
    if (ac == 4 && av[2][1] == '\0' && av[3][1] == '\0')
    {
        while (av[1][i])
        {
            if (av[1][i] == av[2][0])
				write(1, &av[3][0], 1);
            else
            	write(1, &av[1][i], 1);
            i++;
        }
    }

    write(1, "\n", 1);
    return 0;
}
