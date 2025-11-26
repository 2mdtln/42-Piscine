/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:36:20 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/26 23:10:16 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

static t_square	ft_default_square(void)
{
	t_square	square;

	square.row = 0;
	square.col = 0;
	square.size = 0;
	return (square);
}

static t_square	ft_scan_row(t_map map, int row, t_square best)
{
	int			col;
	t_square	current;

	col = 0;
	while (col < map.cols && map.matrix[row][col])
	{
		current = find_square(map, best, row, col);
		if (current.size > best.size)
			best = current;
		col++;
	}
	return (best);
}

t_map	ft_solver(t_map map)
{
	t_square	best;
	int			row;

	if (!map.matrix)
		return (map);
	best = ft_default_square();
	row = 0;
	while (row < map.rows && map.matrix[row])
	{
		best = ft_scan_row(map, row, best);
		row++;
	}
	return (fill_square(map, best));
}
