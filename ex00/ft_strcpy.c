/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr+#+  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2025/11/16 09:06:03 by mtaheri          #+#    #+#              */
/*   Updated: 2025/11/16 09:11:14 by mtaheri         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	z;

	z = 0;
	while (src[z])
	{
		dest[z] = src[z];
		z++;
	}
	dest[z] = '\0';
	return (dest);
}

/*
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
    char s1[] = "Hello Z!";
    char s2[50];  
    ft_strcpy(s2, s1);

    ft_putstr(s1);
    ft_putstr("\n");
    ft_putstr(s2);
    return 0;
}
*/