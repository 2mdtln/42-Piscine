/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 18:58:36 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/20 19:05:09 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(const char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc;
	while (0 < --i)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
	}
	return (0);
}
