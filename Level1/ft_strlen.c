/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeqiri <azeqiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:31:06 by azeqiri           #+#    #+#             */
/*   Updated: 2025/12/08 15:33:37 by azeqiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i=0;

	while (str[i])
	{
		i++;
	}
	return (i);
}
int	main(void)
{
	char str[]="hello from 42";
	int	len;

	len = ft_strlen(str);
	
	while (len--)
	{
		write(1, &str[ft_strlen(str) - len - 1], 1);
	}
	write(1, "\n", 1);
	return (0);
}