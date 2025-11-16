/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strncpy.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr+#+  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2025/11/16 09:06:18 by mtaheri          #+#    #+#              */
/*   Updated: 2025/11/16 14:46:06 by mtaheri         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	z;

	z = 0;
	while (z < n && src[z])
	{
		dest[z] = src[z];
		z++;
	}
	dest[z] = '\0';
	return (dest);
}

/*
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	char	s1[8] = "Hello Z!";
	char	s2[50];

	ft_strncpy(s2, s1, 4);
	ft_putstr(s1);
	ft_putstr("\n");
	ft_putstr(s2);
	return (0);
}
*/
