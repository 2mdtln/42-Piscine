/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:24:23 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/11 09:36:34 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	y;
	int	z;

	y = *a / *b;
	z = *a % *b;
	*a = y;
	*b = z;
}

/*
int	main(void)
{
	int	c;
	int	d;
	char	x[3];

	c = 5;
	d = 2;
	x[0] = c + '0';
	x[1] = ':';
	x[2] = d + '0';
	write(1, x, 3);
	ft_ultimate_div_mod(&c, &d);
	write(1, " ", 1);
	x[0] = c + '0';
	x[1] = ':';
	x[2] = d + '0';
	write(1, x, 3);
	return (0);
}
*/
