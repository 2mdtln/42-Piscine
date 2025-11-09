/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usolak <usolak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:33:37 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/09 13:30:22 by usolak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putslash(int h, int z);
void	ft_putstar(int w, int h);

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
	ft_putslash(1, x);
	ft_putchar('\n');
	ft_putstar(x, y);
	if (y != 1)
	{
		ft_putslash(0, x);
		ft_putchar('\n');
	}
}

void	ft_putslash(int h, int z)
{
	if (h == 1)
	{
		ft_putchar('/');
	}
	else
	{	
		if (z != 1)
			ft_putchar('\\');
	}
	while ((z - 2) > 0)
	{
		ft_putchar('*');
		z--;
	}
	if (h == 0)
	{
		if (z>1)
		ft_putchar('/');
		else 
		ft_putchar('\\');
	}
	else
	{
		if (z != 1)
			ft_putchar('\\');
	}
}

void	ft_putstarline(int w)
{
	int		z;

	z = w;
	ft_putchar('*');
	while (w - 2 >= 1)
	{
		ft_putchar(' ');
		w--;
	}
	if (z != 1)
		ft_putchar('*');
}

void	ft_putstar(int w, int h)
{
	while (h - 2 > 0)
	{
		ft_putstarline(w);
		ft_putchar('\n');
		h--;
	}
}
