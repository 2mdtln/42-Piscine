/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_str_is_lowercase.c                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr+#+  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2025/11/16 11:54:04 by mtaheri          #+#    #+#              */
/*   Updated: 2025/11/16 11:54:30 by mtaheri         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (!((str[x] >= 'a' && str[x] <= 'z')))
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
	ft_putchar(ft_str_is_lowercase(s1) + 48);
    return 0;
}
*/
