/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeqiri <azeqiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:38:19 by azeqiri           #+#    #+#             */
/*   Updated: 2025/12/08 17:03:40 by azeqiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.*/
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int		x;
	int		y;
	char	c;

	x = 42;
	y = 21;

	ft_swap(&x, &y);


	c = "0123456789"[x / 10];
	write(1, &c, 1);
	c = "0123456789"[x % 10];
	write(1, &c, 1);
	write(1, "\n", 1);
	c = "0123456789"[y / 10];
	write(1, &c, 1);
	c = "0123456789"[y % 10];
	write(1, &c, 1);
	write(1, "\n", 1);

	return (0);
}
