/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_str_is_numeric.c                               :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr+#+  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 0005/11/16 11:45:53 by mtaheri          #+#    #+#              */
/*   Updated: 2025/11/16 11:54:37 by mtaheri         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (!((str[x] >= '0' && str[x] <= '9')))
			return (0);
		x++;
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
    char s1[] = "3";
	ft_putchar(ft_str_is_numeric(s1) + 48);
    return 0;
}
*/
