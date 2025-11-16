/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_str_is_alpha.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr+#+  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2025/11/16 09:06:21 by mtaheri          #+#    #+#              */
/*   Updated: 2025/11/16 12:31:49 by mtaheri         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z')
				|| (*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
    char s1[] = "HelloZ";
	ft_putchar(ft_str_is_alpha(s1) + 48);
    return 0;
}
*/
