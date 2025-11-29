/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:12:30 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/12 23:26:28 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	div;
	int	mod;
	char	x[3];

	ft_div_mod(5, 2, &div, &mod);
	x[0] = div + '0';
	x[1] = ':';
	x[2] = mod + '0';
	write(1, x, 3);
	return (0);
}
*/