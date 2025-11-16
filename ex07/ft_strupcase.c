/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strupcase.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr+#+  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2025/11/16 12:41:21 by mtaheri          #+#    #+#              */
/*   Updated: 2025/11/16 14:09:22 by mtaheri         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
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
    char s1[] = "abc";
	ft_strupcase(s1);
	ft_putstr(s1);
    return 0;
}
*/
