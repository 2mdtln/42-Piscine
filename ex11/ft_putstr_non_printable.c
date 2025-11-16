/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putstr_non_printable.c                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr+#+  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2025/11/16 15:36:27 by mtaheri          #+#    #+#              */
/*   Updated: 2025/11/16 16:07:29 by mtaheri         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char c)
{
	const char	*hex = "0123456789abcdef";

	ft_putchar('\\');
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			ft_putchar(*str);
		else
			ft_puthex(*str);
		str++;
	}
}

/*
int	main(void)
{
	ft_putstr_non_printable("Hello\nHow are you?");
	return (0);
}
*/
