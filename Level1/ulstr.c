/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeqiri <azeqiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:54:32 by azeqiri           #+#    #+#             */
/*   Updated: 2025/12/08 17:55:45 by azeqiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.

You must display the result followed by a '\n'.

If the number of arguments is not 1, the program displays '\n'.*/

#include <unistd.h>

// turns lowercase into uppercase
char to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);   // ASCII trick: 'a' → 'A'
    return (c);
}

// turns uppercase into lowercase
char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);   // ASCII trick: 'A' → 'a'
    return (c);
}

// decides how to flip the character
char reverse_case(char c)
{
    if (c >= 'a' && c <= 'z')
        return to_upper(c);
    if (c >= 'A' && c <= 'Z')
        return to_lower(c);
    return c; // non letters stay the same
}

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i])
        {
            char x = reverse_case(av[1][i]);
            write(1, &x, 1);
            i++;
        }
    }

    write(1, "\n", 1);
    return 0;
}
