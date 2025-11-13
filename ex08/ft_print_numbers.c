/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 09:08:27 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/13 14:21:33 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	z;

	z = *a;
	*a = *b;
	*b = z;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int z;
	int m;

	z = 0;
	m = 0;
	while (z < size)
	{
		while (m < size - z -1)
		{
			if (tab[m] > tab[m+1])
			{
				ft_swap(&tab[m], &tab[m+1]);
			}
			m++;
		}
		m = 0;
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
	int z[3] = {6, 1, 9};
	ft_putchar(z[0] + 48); 
	ft_putchar(z[1] + 48);
	ft_putchar(z[2] + 48);
	ft_putchar(' ');
	ft_rev_int_tab(z, 3);
	ft_putchar(z[0] + 48);
	ft_putchar(z[1] + 48);
	ft_putchar(z[2] + 48);
	ft_putchar('\n');
	return 0;
}
*/