/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bparmaks <bparmaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:33:37 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/09 14:28:53 by bparmaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putcorners(int h, int z);
void	ft_putlowero(int w, int h);

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
	ft_putcorners(1, x);
	ft_putchar('\n');
	ft_putlowero(x, y);
	if (y != 1)
	{
		ft_putcorners(0, x);
		ft_putchar('\n');
	}
}

void	ft_putcorners(int h, int z)
{
	if (h == 1)
	{
		ft_putchar('o');
	}
	else
		if (z != 1)
			ft_putchar('o');
	while ((z - 2) > 0)
	{
		ft_putchar('-');
		z--;
	}
	if (h == 0)
	{
		if (z > 1)
			ft_putchar('o');
		else
			ft_putchar('o');
	}
	else
		if (z != 1)
			ft_putchar('o');
}

void	ft_putpipe(int w)
{
	int		z;

	z = w;
	ft_putchar('|');
	while (w - 2 >= 1)
	{
		ft_putchar(' ');
		w--;
	}
	if (z != 1)
		ft_putchar('|');
}

void	ft_putlowero(int w, int h)
{
	while (h - 2 > 0)
	{
		ft_putpipe(w);
		ft_putchar('\n');
		h--;
	}
}
