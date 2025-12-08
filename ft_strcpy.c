/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strxpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeqiri <azeqiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:07:42 by azeqiri           #+#    #+#             */
/*   Updated: 2025/12/08 15:13:13 by azeqiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = 0;
	return (0);
}

int	main(void)
{
	char	dest[20];
	char	source[]="hello from 42T";
	ft_strcpy(dest, source);
	int	i=0;

	while (dest[i])
	{
		write(1, & dest[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
