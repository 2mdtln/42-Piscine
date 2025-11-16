/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_str_is_uppercase.c                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr+#+  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2025/11/16 12:10:06 by mtaheri          #+#    #+#              */
/*   Updated: 2025/11/16 12:35:19 by mtaheri         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
    char s1[] = "H";
	ft_putchar(ft_str_is_uppercase(s1) + 48);
    return 0;
}
*/
