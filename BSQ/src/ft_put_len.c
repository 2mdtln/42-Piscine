/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:36:18 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/26 23:38:43 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	if (!str)
		return (ft_putchar('\n'));
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

int	ft_strlen(char *str)
{
	int	length;

	if (!str)
		return (0);
	length = 0;
	while (str[length])
		length++;
	return (length);
}

int	ft_strprintable_len(char *str)
{
	int	length;

	if (!str)
		return (0);
	length = 0;
	while (str[length] && ((str[length]) >= 32 && (str[length]) <= 126))
		length++;
	return (length);
}

int	ft_atoi(char *str)
{
	long	result;
	int		i;

	if (!str)
		return (0);
	i = 0;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i]) >= '0' && (str[i]) <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)result);
}
