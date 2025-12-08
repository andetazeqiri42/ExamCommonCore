/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeqiri <azeqiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:23:16 by azeqiri           #+#    #+#             */
/*   Updated: 2025/12/08 16:55:14 by azeqiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.
*/
// return alphabetical index: a=1, b=2, ..., z=26
int	alpha_index(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 'a' + 1);
    if (c >= 'A' && c <= 'Z')
        return (c - 'A' + 1);
    return (1);  // non-alphabetical chars repeat once
}

// print the character n times
void	repeat_char(char c, int n)
{
    while (n > 0)
    {
        write(1, &c, 1);
        n--;
    }
}

int	main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i])
        {
            int count = alpha_index(av[1][i]);
            repeat_char(av[1][i], count);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
