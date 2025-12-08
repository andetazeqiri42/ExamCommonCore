/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeqiri <azeqiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:07:42 by azeqiri           #+#    #+#             */
/*   Updated: 2025/12/08 15:25:42 by azeqiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2) /* the s1 string is the destination string where we will copy the data from the source s2 string */
{
	int	i = 0; /* we initialise an intiger i that will be used later to iterate through the strings*/

	while (s2[i])/* we check will the source string is not null enter the loop*/
	{
		s1[i] = s2[i]; /* we copy from the s2 source to the s1 destination */
		i++; /* increment the i*/
	}
	s1[i] = 0;/* we set the character at index i as 0 to nul-terminate the destination s1 string if the copied smthng inside of it or if the s2 is empty*/
	return (s1); /* return the new string*/
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
