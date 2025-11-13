/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 22:50:02 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/13 14:20:39 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	z;
	int	m[42];

	z = 0;
	while (z < size)
	{
		m[z] = tab[size - 1 - z];
		z++;
	}
	z = 0;
	while (z < size)
	{
		tab[z] = m[z];
		z++;
	}
}

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	int z[3] = {8, 4, 2};
	ft_putchar(z[0] + 48); 
	ft_putchar(z[1] + 48);
	ft_putchar(z[2] + 48);
	ft_putchar(' ');
	ft_rev_int_tab(&z, 3);
	ft_putchar(z[0] + 48);
	ft_putchar(z[1] + 48);
	ft_putchar(z[2] + 48);
	ft_putchar('\n');
	return 0;
}
*/