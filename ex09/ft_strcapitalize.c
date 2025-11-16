/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strcapitalize.c                                :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr+#+  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2025/11/16 13:15:02 by mtaheri          #+#    #+#              */
/*   Updated: 2025/11/16 16:03:55 by mtaheri         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (x == 0)
			if (str[x] >= 'a' && str[x] <= 'z')
				str[x] -= 32;
		if (str[x] == ' ' || str[x] == '-' || str[x] == '+')
			if (str[x + 1] >= 'a' && str[x + 1] <= 'z')
				str[x + 1] -= 32;
		x++;
	}
	return (str);
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
    char s1[] = "hi, how are you? 42words forty-two; fifty+and+one";
	ft_strcapitalize(s1);
	ft_putstr(s1);
    return 0;
}
*/
