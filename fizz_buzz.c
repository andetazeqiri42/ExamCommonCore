/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeqiri <azeqiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:50:09 by azeqiri           #+#    #+#             */
/*   Updated: 2025/12/06 17:37:17 by azeqiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead. */
#include <unistd.h>

void	ft_putnbr(int i)
{
	char	c; /* initialize a character that will be used later*/

	if (i > 9) /* we check if the i is greater than 9 if yes then we enter*/
		ft_putnbr(i / 10); /* using the recursive function we divide the i by 10 so we will get a number from 0 to 9 */
	c = "0123456789"[i % 10]; /* we assinge to the character a string of elemnts from 0 to 9 then we do the operation i%10 so we will get the index of a character in the string that we assinget to the c so we basicly take the last digit of the number i for example if the i is 42 we do 42% 10 and we get 2 and if the i is 7 we have 7%10 and we get 7*/
	write(1, &c, 1); /* it prints the character assigned to the c*/
}

int	main(void)
{
	int	i; /* initialize the i that will be used later to iterate through the 100 numbers */

	i = 1;
	while (i <= 100) /* we enter the loop only if the condition is met */
	{
		if (i % 3 == 0 && i % 5 == 0) /* we check if the i is multiple by 3 and 5 we will print the fizzbuzz word if not we check the other conditions */
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else /* if none of those is not met we will print the numbers using the function */
			ft_putnbr(i);

		write(1, "\n", 1); /* add a a new line after printing number or the word */
		i++;
	}
}
