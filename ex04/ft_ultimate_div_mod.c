/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:24:23 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/13 09:42:51 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	z;

	z = *a;
	*a = z / *b;
	*b = z % *b;
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
