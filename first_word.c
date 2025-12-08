/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeqiri <azeqiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:45:01 by azeqiri           #+#    #+#             */
/*   Updated: 2025/12/08 15:14:07 by azeqiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*1) Write a program that takes a string and displays its first word, followed by a newline.*/

#include <unistd.h>

int main (int ac, char  av[])/* declaration of arguments that our program would take. The ac is the argument count it tells us how many arguments were passed to our program when we run it.*/ 
{
int i = 0; /*declaration of an integer i that would be used later for iterating through the characters of the string */

if (ac == 2) /* we check if we have passed exactly two arguments in to the program the first argument is the program itself : ./firstWord  is one argument . So when we write ./firstWord "hello from 42"  we have a total of two arguments for the ac and if pass more than two arguments it will give error because it is designed to take only two arguments*/
{

while (av[1][i] ==' ' && av[1][i] == '\t') /* we put the condition to skip the spaces and tabulations*/

            i++;

while((av[1][i] != ' ' && av[1][i] !='\t') && av[1][i]) /* we will iterate until we find either a space, a tabulation, or a \0 */

            write(1, &av[1][i++], 1);   /*write the first word of the string*/

    }

    write(1, "\n", 1); /* write a new line*/

return (0);

}
/*  compile it using gcc -Wall -Wextra -Werror ./firstWord.c -o firstWord

./firstWord "hello from 42" | cat -e */