/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bparmaks <bparmaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:33:37 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/09 14:39:33 by bparmaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putline(int h, int z);
void	ft_putcharb(int w, int h);

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
	{
		ft_putchar('E');
		ft_putchar('R');
		ft_putchar('R');
		ft_putchar('O');
		ft_putchar('R');
		return ;
	}
	ft_putline(1, x);
	ft_putchar('\n');
	ft_putcharb(x, y);
	if (y != 1)
	{
		ft_putline(0, x);
		ft_putchar('\n');
	}
}

void	ft_putline(int h, int z)
{
	if (h == 1)
	{
		ft_putchar('A');
	}
	else
		if (z != 1)
			ft_putchar('A');
	while ((z - 2) > 0)
	{
		ft_putchar('B');
		z--;
	}
	if (h == 0)
	{
		if (z > 1)
			ft_putchar('C');
		else
			ft_putchar('A');
	}
	else
		if (z != 1)
			ft_putchar('C');
}

void	ft_putcol(int w)
{
	int		z;

	z = w;
	ft_putchar('B');
	while (w - 2 >= 1)
	{
		ft_putchar(' ');
		w--;
	}
	if (z != 1)
		ft_putchar('B');
}

void	ft_putcharb(int w, int h)
{
	while (h - 2 > 0)
	{
		ft_putcol(w);
		ft_putchar('\n');
		h--;
	}
}
