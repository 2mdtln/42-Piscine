/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:36:28 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/26 23:21:57 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

static void	handle_args(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		init(1, argv[i]);
		if (i + 1 < argc)
			ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc <= 1)
		init(0, NULL);
	else
		handle_args(argc, argv);
	return (0);
}
